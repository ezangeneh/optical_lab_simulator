#include "stdafx.h"
#include "element.h"
#include<cmath>


element::element(void)
{
	set_key(0);
	set_x(0);
	set_y(0);
	set_width(0);
	set_height(0);
}
element::element(double X, double Y, double WIDTH, double HEIGHT,int KEY)
{
	set_key(KEY);
	set_x(X);
	set_y(Y);
	set_width(WIDTH);
	set_height(HEIGHT);
}
element::element(element^ obj)
{
	X=obj->X;
	Y=obj->Y;
	width=obj->width;
	height=obj->height;
}
element::~element(void)
{
}
// for set ^ get private member
void element::set_key(int val)
{
	key=val;
}
void element::set_x(double val)
{
	X=val;
}
void element::set_y(double val)
{
	Y=val;
}
void element::set_width(double val)
{
	width=val;
}
void element::set_height(double val)
{
	height=val;
}
int element::get_key()
{
	return key;
}
double element::get_x()
{
	return X;
}
double element::get_y()
{
	return Y;
}
double element::get_width()
{
	return width;
}
double element::get_height()
{
	return height;
}

bool element::strike(beam^ obj,double % len,point^ endpoint)
{
	if(obj->get_start_point()->x<get_x())
	{
		////////////////////////////////////////////////////////////
		if(obj->get_start_point()->y<get_y())
		{
			if(obj->get_angle()>=0 && obj->get_angle()<=270)
				return false;
			double m = abs(obj->get_start_point()->x - get_x());
			double n = abs(obj->get_start_point()->y - get_y());
			double l = abs(tan((360-obj->get_angle())/57.2974) * m);
			if(l>n)
			{
				if(l-n<get_width())
				{
					endpoint->x=get_x();
					endpoint->y=get_y()+l-n;
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
			else
			{
				double deg=obj->get_angle()-270;
				double e = abs( tan(deg/57.2974)*n);
				if(e-m<get_height())
				{
					
					endpoint->x=get_x()+e-m;
					endpoint->y=get_y();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}

		}
		////////////////////////////////////////////////////////////
		else if(obj->get_start_point()->y>get_y() && obj->get_start_point()->y<get_y()+get_width())
		{
			if(obj->get_angle()>=90 && obj->get_angle()<=270)
				return false;
			if(obj->get_angle()<90 && obj->get_angle()>=0)
			{
				double m = abs(obj->get_start_point()->x-get_x());
				double n = abs(obj->get_start_point()->y-get_y());
				double l= abs(tan(obj->get_angle()/57.2974) * m);
				if(l<n)
				{
					
					endpoint->x = get_x();
					endpoint->y = get_y()+(n-l);
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else 
					return false;
			}
			else
			{
				double m = abs(obj->get_start_point()->x-get_x());
				double n = abs(obj->get_start_point()->y-(get_y()+get_width()));
				double deg= 360 - obj->get_angle();
				double e = abs( tan(deg/57.2974)*m);
				if(e<n)
				{
					
					endpoint->x = get_x();
					endpoint->y = obj->get_start_point()->y+e;
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else if(obj->get_start_point()->y>get_y()+get_width())
		{
			if(obj->get_angle()>=90 && obj->get_angle()<360)
				return false;
			double m = abs(obj->get_start_point()->x - get_x());
			double n = abs(obj->get_start_point()->y - (get_y()+get_width()));
			double l = abs(tan(obj->get_angle()/57.2974) * m);
			if(l>n)
			{
				if(l-n<get_width())
				{
					
					endpoint->x=get_x();
					endpoint->y=get_y()+get_width()-(l-n);
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
			else
			{
				double deg=90-obj->get_angle();
				double e = abs( tan(deg/57.2974)*n);
				if(e-m<get_height())
				{
					
					endpoint->x=get_x()+e-m;
					endpoint->y=get_y()+get_width();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else
			return false;
		////////////////////////////////////////////////////////////
	}
	else if(obj->get_start_point()->x>get_x()+get_height())
	{
		////////////////////////////////////////////////////////////
		if(obj->get_start_point()->y<get_y())
		{
			if( (obj->get_angle()<360 && obj->get_angle()>=270 )|| (obj->get_angle()>=0 && obj->get_angle()<=180) )
				return false;
			double m = abs(obj->get_start_point()->x - (get_x()+get_height()));
			double n = abs(obj->get_start_point()->y - get_y());
			double l = abs(tan((obj->get_angle()-180)/57.2974) * m);
			if(l>n)
			{
				if(l-n<get_width())
				{
					
					endpoint->x=get_x()+get_height();
					endpoint->y=get_y()+l-n;
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
			else
			{
				double deg=270 - obj->get_angle();
				double e = abs(tan(deg/57.2974)*n);
				if(e-m<get_height())
				{
					
					endpoint->x=get_x()+get_height()-(e-m);
					endpoint->y=get_y();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else if(obj->get_start_point()->y>get_y() && obj->get_start_point()->y<get_y()+get_width())
		{
			if( (obj->get_angle()>=0 && obj->get_angle()<=90) || (obj->get_angle()>=270 && obj->get_angle()<360) )
				return false;
			if(obj->get_angle()<=180&& obj->get_angle()>90)
			{
				double m = abs(obj->get_start_point()->x-(get_x()+get_height()));
				double n = abs(obj->get_start_point()->y-get_y());
				double l= abs(tan((180-obj->get_angle())/57.2974) * m);
				if(l<n)
				{
					
					endpoint->x = get_x()+get_height();
					endpoint->y = get_y()+(n-l);
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else 
					return false;
			}
			else
			{
				double m = abs(obj->get_start_point()->x-(get_x()+get_height()));
				double n = abs(obj->get_start_point()->y-(get_y()+get_width()));
				double l = abs( tan((obj->get_angle()-180)/57.2974)*m);
				if(l<n)
				{
					
					endpoint->x = get_x()+get_height();
					endpoint->y = obj->get_start_point()->y+l;
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else if(obj->get_start_point()->y> get_y()+get_width())
		{
			if( (obj->get_angle()<=90 && obj->get_angle()>=0 )|| (obj->get_angle()>=180 && obj->get_angle()<360) )
				return false;
			double m = abs(obj->get_start_point()->x - (get_x()+get_height()));
			double n = abs(obj->get_start_point()->y - (get_y()+get_width()));

			double l = abs(tan((180 - obj->get_angle())/57.2974) * m);
			if(l>n)
			{
				if(l-n<get_width())
				{
					
					endpoint->x=get_x()+get_height();
					endpoint->y=get_y()+get_width()-(l-n);
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
			else
			{
				double deg=obj->get_angle()-90;
				double e = abs( tan(deg/57.2974)*n);
				if(e-m<get_height())
				{
					
					endpoint->x=get_x()+get_height()-(e-m);
					endpoint->y=get_y()+get_width();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else
			return false;
		////////////////////////////////////////////////////////////
	}
	else if(obj->get_start_point()->x>get_x() && obj->get_start_point()->x<get_x()+get_height())
	{
		////////////////////////////////////////////////////////////
		if(obj->get_start_point()->y<get_y())
		{
			if( (obj->get_angle()>=0 && obj->get_angle()<=180))
				return false;
			if(obj->get_angle()<=270&& obj->get_angle()>180)
			{
				double m = abs(obj->get_start_point()->x - get_x());
				double n = abs(obj->get_start_point()->y - get_y());
				double l= abs(tan((270 - obj->get_angle())/57.2974) * n);
				if(l<m)
				{
					
					endpoint->x = obj->get_start_point()->x-l;
					endpoint->y = get_y();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else 
					return false;
			}
			else
			{
				double m = abs(obj->get_start_point()->x-(get_x()+get_height()));
				double n = abs(obj->get_start_point()->y-get_y());
				double l = abs( tan((obj->get_angle()-270)/57.2974)*n);
				if(l<m)
				{
	
					endpoint->x = obj->get_start_point()->x+l;
					endpoint->y = get_y();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else if(obj->get_start_point()->y>get_y()+get_width())
		{
			if( (obj->get_angle()>=180 && obj->get_angle()<=360))
				return false;
			if(obj->get_angle()<180 && obj->get_angle()>=90)
			{
				double m = abs(obj->get_start_point()->x - get_x());
				double n = abs(obj->get_start_point()->y - (get_y()+get_width()));
				double l= abs(tan((obj->get_angle()-90)/57.2974) * n);
				if(l<m)
				{
					
					endpoint->x = obj->get_start_point()->x-l;
					endpoint->y = get_y()+get_width();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else 
					return false;
			}
			else
			{
				double m = abs(obj->get_start_point()->x-(get_x()+get_height()));
				double n = abs(obj->get_start_point()->y-(get_y()+get_width()));
				double l = abs(tan((90-obj->get_angle())/57.2974)*n);
				if(l<m)
				{
					
					endpoint->x = obj->get_start_point()->x+l;
					endpoint->y = get_y()+get_width();
					
					len=sqrt(pow(endpoint->x-obj->get_start_point()->x,2)+pow(endpoint->y-obj->get_start_point()->y,2));
					return true;
				}
				else
					return false;
			}
		}
		////////////////////////////////////////////////////////////
		else
			return false;
		////////////////////////////////////////////////////////////
	}
	return false;
}
