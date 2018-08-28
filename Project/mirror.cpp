#include "stdafx.h"
#include "mirror.h"

mirror::mirror()
{
	set_angle(0);
}
mirror::mirror(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE):element(X, Y, WIDTH, HEIGHT, KEY)
{
	set_angle(ANGLE);
}
mirror::mirror(mirror^ obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
	set_angle(obj->angle);
}
mirror::~mirror(void)
{
}
// set ^ get data member
void mirror::set_angle(double val)
{
	angle=val;
}
double mirror::get_angle()
{
	return angle;
}