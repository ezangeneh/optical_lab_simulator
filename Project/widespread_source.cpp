#include "stdafx.h"
#include "widespread_source.h"


widespread_source::widespread_source(void)
{
	beams=gcnew array<beam^>(0);
}
widespread_source::widespread_source(double X, double Y, double WIDTH, double HEIGHT, int KEY, int NumberOfbeams):source(X, Y, WIDTH, HEIGHT, KEY)
{
	set_num_beams(NumberOfbeams);
	beams=gcnew array<beam^>(NumberOfbeams);
	point^ p=gcnew point();
	p->x=get_x()+(get_height()/2);
	p->y=get_y()+(get_width()/2);
	set_point(p);
	double deg=0;
	double step=360/get_num_beams();

	for(int i=0; i<get_num_beams();i++)
	{
		beams[i]=gcnew beam();
		beams[i]->set_angle(deg);
		deg+=step;
		beams[i]->set_start_point(p);
		beams[i]->set_last_point(p);
		beams[i]->set_power(true);
	}
}
widespread_source::widespread_source(widespread_source ^ obj)
{	
	beams=gcnew array<beam^>(obj->get_num_beams());
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_height(obj->get_height());
	set_width(obj->get_width());
	set_num_beams(obj->get_num_beams());
	set_point(obj->get_point());
	for(int i=0;i<get_num_beams();i++)
	{
		beams[i]=gcnew beam();
		beams[i]->set_angle(obj->beams[i]->get_angle());
		beams[i]->set_start_point(obj->beams[i]->get_start_point());
		beams[i]->set_last_point(obj->beams[i]->get_last_point());
		beams[i]->set_power(obj->beams[i]->get_power());
	}
}
widespread_source::~widespread_source(void)
{
	//System::GC::Collect();
}

// set ^ get private data member

void widespread_source::set_num_beams(int val)
{
	num_beams=val;
}
int widespread_source::get_num_beams()
{
	return num_beams;
}
void widespread_source::set_point(point^ obj)
{
	p1=gcnew point();
	p1->x=obj->x;
	p1->y=obj->y;
}
point^ widespread_source::get_point()
{
	return p1;
}