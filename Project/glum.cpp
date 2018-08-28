#include "stdafx.h"
#include "glum.h"


glum::glum(void)
{
}

glum::glum(double X, double Y, double WIDTH, double HEIGHT,int KEY):element(X, Y, WIDTH, HEIGHT,KEY) 
{
}

glum::glum(glum ^obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
}

glum::~glum(void)
{
}

beam ^glum::reflex(beam^ obj)
{
	obj->set_power(false);
	beam^ ra = gcnew beam(obj->get_last_point(),-1,false);
	return ra;
}
