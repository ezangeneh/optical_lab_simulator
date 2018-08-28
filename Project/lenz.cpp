#include "stdafx.h"
#include "lenz.h"


lenz::lenz()
{
	set_angle(0);
}
lenz::lenz(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE):element(X, Y, WIDTH, HEIGHT, KEY)
{
	set_angle(ANGLE);
}
lenz::lenz(lenz^ obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
	set_angle(obj->angle);
}
lenz::~lenz(void)
{
}
// set ^ get data member
void lenz::set_angle(double val)
{
	angle=val;
}
double lenz::get_angle()
{
	return angle;
}