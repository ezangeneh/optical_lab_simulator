#include "stdafx.h"
#include "source.h"

source::source()
{
}
source::source(double X, double Y, double WIDTH, double HEIGHT, int KEY):element(X, Y, WIDTH, HEIGHT, KEY)
{
}
source::source(source^ obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
}
source::~source(void)
{	
	//System::GC::Collect();
}
// override virtual function
beam ^source::reflex(beam^ obj)
{
	obj->set_power(false);
	beam^ ra =gcnew beam(obj->get_last_point(),obj->get_angle(),true);
	return ra;
}
