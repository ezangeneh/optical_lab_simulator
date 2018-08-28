#include "stdafx.h"
#include "sole_mirror.h"


sole_mirror::sole_mirror()
{
}
sole_mirror::sole_mirror(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE):mirror(X, Y, WIDTH, HEIGHT, KEY, ANGLE)
{
}
sole_mirror::sole_mirror(sole_mirror^ obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
	set_angle(obj->get_angle());
}
sole_mirror::~sole_mirror()
{
}

// override virtual function
beam ^sole_mirror::reflex(beam^ obj) 
{
	double deg=-1;
	if(get_angle()==0 && obj->get_last_point()->y==get_y())
	{
		if(obj->get_angle()==270)
			deg=90;
		else if(obj->get_start_point()->x<get_x()+(get_height()/2))
			deg=360-obj->get_angle();
		else
			deg=360-obj->get_angle();
	}
	else if(get_angle()==90 && obj->get_last_point()->x==get_x())
	{
		if(obj->get_angle()==0)
			deg=180;
		else if(obj->get_start_point()->y<get_y()+(get_width()/2))
			deg=540-obj->get_angle();
		else
			deg=180-obj->get_angle();
	}
	else if(get_angle()==180 && obj->get_last_point()->y==get_y()+get_width())
	{
		if(obj->get_angle()==90)
			deg=270;
		else if(obj->get_start_point()->x<get_x()+(get_height()/2))
			deg=360-obj->get_angle();
		else
			deg=360-obj->get_angle();
	}
	else if(get_angle()==270 && obj->get_last_point()->x==get_x()+get_height())
	{
		if(obj->get_angle()==180)
			deg=0;
		else if(obj->get_start_point()->y<get_y()+(get_width()/2))
			deg=540-obj->get_angle();
		else
			deg=obj->get_angle()-90;
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

