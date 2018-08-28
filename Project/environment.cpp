#include "stdafx.h"
#include "environment.h"
#include "glum.h"
#include "cave_mirror.h"
#include "convex_mirror.h"
#include "onecave_lenz.h"
#include "oneconvex_lenz.h"
#include "parallel_source.h"
#include "sole_mirror.h"
#include "solo_source.h"
#include "widespread_source.h"
#include "twocave_lenz.h"
#include "twoconvex_lenz.h"
#include"optionfile.h"
#include<cmath>

environment::environment(void)
{
	set_width(100);
	set_height(100);
	ar1=gcnew array<element^>(0);
	ar2=gcnew array<beam^>(0);
}
environment::environment(double WIDTH, double HEIGHT)
{
	set_width(WIDTH);
	set_height(HEIGHT);
	ar1=gcnew array<element^>(0);
	ar2=gcnew array<beam^>(0);
}
environment::environment(environment^ obj)
{
	set_width(obj->get_width());
	set_height(obj->get_height());
	ar1=gcnew array<element^>(obj->ar1->Length);
	ar2=gcnew array<beam^>(obj->ar2->Length);
	ar1=obj->ar1;
	ar2=obj->ar2;
}
environment::~environment(void)
{
	for(int i=0;i<ar1->Length;i++)
		delete ar1[i];
	
}
// set ^ get data member
void environment::set_width(double val)
{
	width=val;
}
void environment::set_height(double val)
{
	height=val;
}
double environment::get_width()
{
	return width;
}
double environment::get_height()
{
	return height;
}
// utility function 
void environment::en_strike(beam ^ obj)
{
	if(obj->get_angle()<90)
	{
		double m = get_height()-obj->get_start_point()->x;
		double n = obj->get_start_point()->y;
		double l = abs(tan((obj->get_angle())/57.2974) * m);
		if(l<n)
		{
			point^ p=gcnew point();
			p->x =get_height();
			p->y =obj->get_start_point()->y-l;
			obj->set_last_point(p);
		}
		else
		{
			double e = abs(tan((90 - obj->get_angle())/57.2974) * n);
			point^ p=gcnew point();
			p->x =obj->get_start_point()->x + e;
			p->y = 0 ;
			obj->set_last_point(p);
		}
	}
	else if(obj->get_angle()<180)
	{
		double m = obj->get_start_point()->x;
		double n = obj->get_start_point()->y;
		double l = abs(tan((180-obj->get_angle())/57.2974) * m);
		if(l<n)
		{
			point^ p=gcnew point();
			p->x = 0;
			p->y = obj->get_start_point()->y - l;
			obj->set_last_point(p);
		}
		else
		{
			double e = abs(tan((obj->get_angle() - 90)/57.2974) * n);
			point^ p=gcnew point();
			p->x =obj->get_start_point()->x - e;
			p->y = 0 ;
			obj->set_last_point(p);
		}
	}
	else if(obj->get_angle()<270)
	{
		double m = obj->get_start_point()->x;
		double n = get_width() - obj->get_start_point()->y;
		double l = abs(tan((obj->get_angle()-180)/57.2974) * m);
		if(l<n)
		{
			point^ p=gcnew point();
			p->x = 0;
			p->y = obj->get_start_point()->y + l;
			obj->set_last_point(p);
		}
		else
		{
			double e = abs(tan((270 - obj->get_angle())/57.2974) * n);
			point^ p=gcnew point();
			p->x =obj->get_start_point()->x - e;
			p->y = get_width() ;
			obj->set_last_point(p);
		}
	}
	else
	{
		double m = get_height() - obj->get_start_point()->x;
		double n = get_width() - obj->get_start_point()->y;
		double l = abs(tan((360 - obj->get_angle())/57.2974) * m);
		if(l<n)
		{
			point^ p=gcnew point();
			p->x = get_height();
			p->y = obj->get_start_point()->y + l;
			obj->set_last_point(p);
		}
		else
		{
			double e = abs(tan((obj->get_angle()-270)/57.2974) * n);
			point^ p=gcnew point();
			p->x =obj->get_start_point()->x + e;
			p->y = get_width() ;
			obj->set_last_point(p);
		}
	}
	
}

// public member function 
bool environment::isempty()
{
	if(ar1->Length==0)
		return true;
	return false;
}
void environment::run()
{
	ar2->Clear(ar2,0,ar2->Length);
	ar2->Resize(ar2,0);
	
	for(int i=0;i<ar1->Length;i++)
	{
		if(dynamic_cast<solo_source^>(ar1[i]))
		{
			solo_source^ soptr = dynamic_cast<solo_source^>(ar1[i]);
			ar2->Resize(ar2,ar2->Length+1);
			ar2[ar2->Length-1]=soptr->beams[0];
		}
		else if(dynamic_cast<parallel_source^>(ar1[i]))
		{
			parallel_source^ paptr = dynamic_cast<parallel_source^>(ar1[i]);
			for(int i=0;i<paptr->get_num_beams();i++)
			{
				ar2->Resize(ar2,ar2->Length+1);
				ar2[ar2->Length-1]=paptr->beams[i];
			}
		}
		else if(dynamic_cast<widespread_source^>(ar1[i]))
		{
			widespread_source^ spptr = dynamic_cast<widespread_source^>(ar1[i]);
			for(int i=0;i<spptr->get_num_beams();i++)
			{
				ar2->Resize(ar2,ar2->Length+1);
				ar2[ar2->Length-1]=spptr->beams[i];
			}
				
		}
	}

	for(int i=0;i<ar2->Length;i++)
	{
		double len = 0 , min = sqrt(pow(get_height(),2) + pow(get_width(),2) );
		int loc=-1;
		point^ endpoint= gcnew point();
		for(int j=0; j<ar1->Length;j++)
		{
			if(ar1[j]->strike(ar2[i],len,endpoint))
			{
				if(len < min)
				{
					min = len;
					ar2[i]->set_last_point(endpoint);
					loc = j;
				}
			}	
		}
		if(loc == -1)
		{
			en_strike(ar2[i]);
			ar2[i]->set_power(false);
		}
		else
		{
			if(ar1[loc]->reflex(ar2[i])->get_angle()!=-1)
			{		
				ar2->Resize(ar2,ar2->Length+1);
				ar2[ar2->Length-1]=ar1[loc]->reflex(ar2[i]);
			}
		}
	}
}

void environment::clearall()
{
	ar2->Clear(ar2,0,ar2->Length);
	ar2->Resize(ar2,0);
	ar1->Clear(ar1,0,ar1->Length);
	ar1->Resize(ar1,0);
}
void environment::resize(int key,double x, double y)
{
	for(int i=0;i<ar1->Length;i++)
	{
		if(ar1[i]->get_key()==key)
		{
			if(dynamic_cast<solo_source^>(ar1[i]))
			{
				solo_source^ ptr=dynamic_cast<solo_source^>(ar1[i]);
				ar1[i]=gcnew solo_source(ptr->get_x(),ptr->get_y()
										,y,x
										,ptr->get_key(),ptr->get_angle());
			    
			}
			else if(dynamic_cast<widespread_source^>(ar1[i]))
			{
				widespread_source^ ptr=dynamic_cast<widespread_source^>(ar1[i]);
				ar1[i]=gcnew widespread_source(ptr->get_x(),ptr->get_y()
										,y,x
										,ptr->get_key(),ptr->get_num_beams());
			    
			}
			else if(dynamic_cast<parallel_source^>(ar1[i]))
			{
				parallel_source^ ptr=dynamic_cast<parallel_source^>(ar1[i]);
				ar1[i]=gcnew parallel_source(ptr->get_x(),ptr->get_y()
										,y,x
										,ptr->get_key(),ptr->get_num_beams(),ptr->get_angle());
			}
			else
			{
				ar1[i]->set_height(x);
				ar1[i]->set_width(y);
			}
		}
	}
}


void environment::relocation(int key, double x, double y)
{
	for(int i=0;i<ar1->Length;i++)
	{
		if(ar1[i]->get_key()==key)
		{
			if(dynamic_cast<solo_source^>(ar1[i]))
			{
				solo_source^ ptr=dynamic_cast<solo_source^>(ar1[i]);
				ar1[i]=gcnew solo_source(x,y
										,ptr->get_width(),ptr->get_height()
										,ptr->get_key(),ptr->get_angle());
			    
			}
			else if(dynamic_cast<widespread_source^>(ar1[i]))
			{
				widespread_source^ ptr=dynamic_cast<widespread_source^>(ar1[i]);
				ar1[i]=gcnew widespread_source(x,y
										,ptr->get_width(),ptr->get_height()
										,ptr->get_key(),ptr->get_num_beams());
			    
			}
			else if(dynamic_cast<parallel_source^>(ar1[i]))
			{
				parallel_source^ ptr=dynamic_cast<parallel_source^>(ar1[i]);
				ar1[i]=gcnew parallel_source(x,y
										,ptr->get_width(),ptr->get_height()
										,ptr->get_key(),ptr->get_num_beams(),ptr->get_angle());
			}
			else
			{
				ar1[i]->set_x(x);
				ar1[i]->set_y(y);
			}
		}
	}
}

void environment::add_element(element^ ptr)
{
	array<element^>::Resize(ar1,ar1->Length+1);
	if(dynamic_cast<glum^>(ptr))
	{
		glum^ gptr = dynamic_cast<glum^>(ptr);
		ar1[ar1->Length-1] = gcnew glum(gptr);
	}
	else if(dynamic_cast<cave_mirror^>(ptr))
	{
		cave_mirror^ gptr = dynamic_cast<cave_mirror^>(ptr);
		ar1[ar1->Length-1] = gcnew cave_mirror(gptr);
	}
	else if(dynamic_cast<convex_mirror^>(ptr))
	{
		convex_mirror^ gptr = dynamic_cast<convex_mirror^>(ptr);
		ar1[ar1->Length-1] = gcnew convex_mirror(gptr);
	}
	else if(dynamic_cast<onecave_lenz^>(ptr))
	{
		onecave_lenz^ gptr = dynamic_cast<onecave_lenz^>(ptr);
		ar1[ar1->Length-1] = gcnew onecave_lenz(gptr);
	}
	else if(dynamic_cast<oneconvex_lenz^>(ptr))
	{
		oneconvex_lenz^ gptr = dynamic_cast<oneconvex_lenz^>(ptr);
		ar1[ar1->Length-1] = gcnew oneconvex_lenz(gptr);
	}
	else if(dynamic_cast<sole_mirror^>(ptr))
	{
		sole_mirror^ gptr = dynamic_cast<sole_mirror^>(ptr);
		ar1[ar1->Length-1] = gcnew sole_mirror(gptr);
	}
	else if(dynamic_cast<solo_source^>(ptr))
	{
		solo_source^ gptr = dynamic_cast<solo_source^>(ptr);
		ar1[ar1->Length-1] = gcnew solo_source(gptr);
	}
	else if(dynamic_cast<parallel_source^>(ptr))
	{
		parallel_source^ gptr = dynamic_cast<parallel_source^>(ptr);
		ar1[ar1->Length-1] = gcnew parallel_source(gptr);
	}
	else if(dynamic_cast<widespread_source^>(ptr))
	{
		widespread_source^ gptr = dynamic_cast<widespread_source^>(ptr);
		ar1[ar1->Length-1] = gcnew widespread_source(gptr);
	}

	else if(dynamic_cast<twocave_lenz^>(ptr))
	{
		twocave_lenz^ gptr = dynamic_cast<twocave_lenz^>(ptr);
		ar1[ar1->Length-1] = gcnew twocave_lenz(gptr);
	}
	else if(dynamic_cast<twoconvex_lenz^>(ptr))
	{
		twoconvex_lenz^ gptr = dynamic_cast<twoconvex_lenz^>(ptr);
		ar1[ar1->Length-1] = gcnew twoconvex_lenz(gptr);
	}

}
void environment::remove_element(int KEY)
{
	for(int i=0;i<ar1->Length;i++)
		if(ar1[i]->get_key()==KEY)
		{		
			for(int j=i ; j<ar1->Length-1 ; j++)
				ar1[j]=ar1[j+1];
			ar1->Resize(ar1,ar1->Length-1);
			break;
		}

}