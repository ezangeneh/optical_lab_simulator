#include "stdafx.h"
#include "parallel_source.h"


parallel_source::parallel_source(void)
{
	beams=gcnew array<beam^>(0);
}
parallel_source::parallel_source(double X, double Y, double WIDTH, double HEIGHT, int KEY,int NumberOfbeams,double ANGLE):source(X, Y, WIDTH, HEIGHT, KEY)
{
	beams=gcnew array<beam^>(NumberOfbeams);
	set_angle(ANGLE);
	set_num_beams(NumberOfbeams);
	point^ p=gcnew point();
	
	if(get_angle()>=0 && get_angle()<90)
	{
		double step=get_width()/get_num_beams();
		double y=get_y();
		for(int i=0;i<get_num_beams();i++)
		{
			beams[i]=gcnew beam();
			beams[i]->set_angle(get_angle());
			beams[i]->set_power(true);
			
			p->x=get_x()+get_height();
			p->y=y;
			y+=step;
			beams[i]->set_start_point(p);
			beams[i]->set_last_point(p);
		}
	}
	else if (get_angle()>=90 && get_angle()<180)
	{
		double step=get_height()/get_num_beams();
		double x=get_x();
		for(int i=0;i<get_num_beams();i++)
		{
			beams[i]=gcnew beam();
			beams[i]->set_angle(get_angle());
			beams[i]->set_power(true);
			
			p->x=x;
			p->y=get_y();
			x+=step;

			beams[i]->set_start_point(p);
			beams[i]->set_last_point(p);
		}
	}
	else if (get_angle()>=180 && get_angle()<270)
	{
		double step=get_width()/get_num_beams();
		double y=get_y();
		for(int i=0;i<get_num_beams();i++)
		{
			beams[i]=gcnew beam();
			beams[i]->set_angle(get_angle());
			beams[i]->set_power(true);

			p->x=get_x();
			p->y=y;
			y+=step;

			beams[i]->set_start_point(p);
			beams[i]->set_last_point(p);
		}
	}
	else
	{
		double step=get_height()/get_num_beams();
		double x=get_x();
		for(int i=0;i<get_num_beams();i++)
		{
			beams[i]=gcnew beam();
			beams[i]->set_angle(get_angle());
			beams[i]->set_power(true);

			p->x=x;
			p->y=get_y()+get_width();
			x+=step;

			beams[i]->set_start_point(p);
			beams[i]->set_last_point(p);
		}
	}
}
parallel_source::parallel_source(parallel_source ^ obj)
{
	beams=gcnew array<beam^>(obj->get_num_beams());
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
	set_num_beams(obj->get_num_beams());
	set_angle(obj->get_angle());
	for(int i=0;i<get_num_beams();i++)
	{
		beams[i]=gcnew beam();
		beams[i]->set_angle(obj->beams[i]->get_angle());
		beams[i]->set_start_point(obj->beams[i]->get_start_point());
		beams[i]->set_last_point(obj->beams[i]->get_last_point());
		beams[i]->set_power(obj->beams[i]->get_power());
	}
}
parallel_source::~parallel_source(void)
{
	//System::GC::Collect();
}
// set ^ get private data member
void parallel_source::set_angle(double val)
{
	angle=val;
}
void parallel_source::set_num_beams(int val)
{
	num_beams=val;
}
double parallel_source::get_angle()
{
	return angle;
}
int parallel_source::get_num_beams()
{
	return num_beams;
}
