#include "stdafx.h"
#include "cave_mirror.h"


cave_mirror::cave_mirror()
{
}
cave_mirror::cave_mirror(double X, double Y, double WIDTH, double HEIGHT, int KEY,double ANGLE):mirror(X, Y, WIDTH, HEIGHT,KEY, ANGLE)
{
}
cave_mirror::cave_mirror(cave_mirror^ obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
	set_angle(obj->get_angle());
}
cave_mirror::~cave_mirror()
{
}
// override virtual function
beam^ cave_mirror::reflex( beam^ obj) 
{
	System::Random^ r=gcnew System::Random();
	double deg=-1;
	if(get_angle()==0 && obj->get_last_point()->y==get_y())
	{
		if(obj->get_angle() >180 && obj->get_angle() <= 270 )		
			deg = (360 - obj->get_angle()) - System::Math::Round(0.5*(270 - obj->get_angle()));
			//deg=r->Next()%40+10;
		else
			deg = (360 - obj->get_angle()) + System::Math::Round(0.5*(obj->get_angle() - 270));
	}
	else if(get_angle()==90 && obj->get_last_point()->x==get_x())
	{
		if((obj->get_angle() >270 && obj->get_angle() < 360))
			deg = (540 - obj->get_angle()) - System::Math::Round(0.5*(360 - obj->get_angle()));
		else
			deg = (180 - obj->get_angle()) + System::Math::Round(0.5*(obj->get_angle()));
	}
	else if(get_angle()==180 && obj->get_last_point()->y==get_y()+get_width())
	{
		if(obj->get_angle() >0 && obj->get_angle() < 90)
			deg = (360- obj->get_angle()) - System::Math::Round(0.5*(90 - obj->get_angle()));
		else
			deg = (360 - obj->get_angle()) + System::Math::Round(0.5*(obj->get_angle() - 90));
	}
	else if(get_angle()==270 && obj->get_last_point()->x==get_x()+get_height())
	{
		if(obj->get_angle() >180 && obj->get_angle() <270)
			deg = (540 - obj->get_angle()) - System::Math::Round(0.5*(obj->get_angle() - 180));
		else
			deg = (180 - obj->get_angle()) + System::Math::Round(0.5*(180 - obj->get_angle()));
	}
	obj->set_power(false);
	if(deg!=-1)
	{		
		beam^ ra=gcnew beam(obj->get_last_point(),deg,true);
		return ra;
	}
	else
	{	
		beam^ ra=gcnew beam(obj->get_last_point(),deg,false);
		return ra;
	}
}