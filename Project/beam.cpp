#include "stdafx.h"
#include "beam.h"

beam::beam()
{
	set_angle(0);
}
beam::beam(point^ start_point,double ANGLE,bool POWER)
{
	set_start_point(start_point);
	set_last_point(start_point);
	set_angle(ANGLE);
	set_power(POWER);
}
beam::beam(beam^ obj)
{
	set_start_point(obj->get_start_point());
	set_last_point(obj->get_last_point());
	set_angle(obj->get_angle());
	set_power(obj->get_power());
}
beam::~beam(void)
{
}

void beam::set_angle(double val)
{
	angle=val;
}
double beam::get_angle()
{
	return angle;
}
void beam::set_start_point(point^ p)
{
	p1=gcnew point();
	p1->x=p->x;
	p1->y=p->y;
}
point^ beam::get_start_point()
{
	return p1;
}
void beam::set_last_point(point^ p)
{
	p2=gcnew point();
	p2->x=p->x;
	p2->y=p->y;
}
point^ beam::get_last_point()
{
	return p2;
}
void beam::set_power(bool b)
{
	power=b;
}
bool beam::get_power()
{
	return power;
}
