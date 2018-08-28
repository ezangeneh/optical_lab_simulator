#include "stdafx.h"
#include "solo_source.h"

solo_source::solo_source(void):source()
{
	beams=gcnew array<beam^>(1);
	set_angle(0);
	point^ p=gcnew point();
	p->x=get_x()+(get_height()/2);
	p->y=get_y()+(get_width()/2);
	beams[0]=gcnew beam();
	beams[0]->set_angle(get_angle());
	beams[0]->set_start_point(p);
	beams[0]->set_last_point(p);
	beams[0]->set_power(true);
}
solo_source::solo_source(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE):source(X, Y, WIDTH, HEIGHT, KEY)
{
	beams=gcnew array<beam^>(1);
	set_angle(ANGLE);
	point^ p=gcnew point();
	p->x=get_x()+(get_height()/2);
	p->y=get_y()+(get_width()/2);
	beams[0]=gcnew beam();
	beams[0]->set_angle(get_angle());
	beams[0]->set_start_point(p);
	beams[0]->set_last_point(p);
	beams[0]->set_power(true);
}
solo_source::solo_source(solo_source ^ obj)
{
	beams=gcnew array<beam^>(1);
	set_angle(obj->get_angle());
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_height(obj->get_height());
	set_width(obj->get_width());
	beams[0]=gcnew beam();
	beams[0]->set_angle(obj->get_angle());
	beams[0]->set_start_point(obj->beams[0]->get_start_point());
	beams[0]->set_last_point(obj->beams[0]->get_last_point());
	beams[0]->set_power(true);
	
}
solo_source::~solo_source(void)
{
	//System::GC::Collect();
}

// set ^ get private data member
void solo_source::set_angle(double val)
{
	angle=val;
}
double solo_source::get_angle()
{
	return angle;
}

void solo_source::set_point(point^ obj)
{
	p1=gcnew point();
	p1->x=obj->x;
	p1->y=obj->y;
}

point^ solo_source::get_point()
{
	return p1;
}