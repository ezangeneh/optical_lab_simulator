#include "stdafx.h"
#include "twocave_lenz.h"


twocave_lenz::twocave_lenz()
{
}
twocave_lenz::twocave_lenz(double X, double Y, double WIDTH, double HEIGHT,int KEY,double ANGLE):lenz(X, Y, WIDTH, HEIGHT, KEY, ANGLE)
{
}
twocave_lenz::twocave_lenz(twocave_lenz^ obj)
{
	set_key(obj->get_key());
	set_x(obj->get_x());
	set_y(obj->get_y());
	set_width(obj->get_width());
	set_height(obj->get_height());
	set_angle(obj->get_angle());
}
twocave_lenz::~twocave_lenz()
{
}

// override virtual function
beam ^twocave_lenz::reflex(beam^ obj) 
{
	double deg;
	point^ p=gcnew point();
	p->x=obj->get_last_point()->x;
	p->y=obj->get_last_point()->y;
	if(obj->get_last_point()->y==get_y())
	{
		p->y+=get_width();
		if(obj->get_angle() >270 && obj->get_angle() < 360 )
			deg = obj->get_angle() + System::Math::Round(0.5*(360 - obj->get_angle()));
		else
			deg = obj->get_angle() - System::Math::Round(0.5*(obj->get_angle() - 180));
	}
	else if(obj->get_last_point()->y==get_y()+get_width())
	{		
		p->y-=get_width();
		if(obj->get_angle() >0 && obj->get_angle() < 90 )
			deg = obj->get_angle() - System::Math::Round(0.5*(obj->get_angle()));
		else
			deg = obj->get_angle() + System::Math::Round(0.5*(180 - obj->get_angle()));
	}
	else if(obj->get_last_point()->x==get_x())
	{		
		p->x+=get_height();
		if(obj->get_angle() >=0 && obj->get_angle() < 90 )
			deg = obj->get_angle() + System::Math::Round(0.5*(90 - obj->get_angle()));
		else
			deg = obj->get_angle() - System::Math::Round(0.5*(obj->get_angle() - 270));
	}
	else
	{		
		p->x-=get_height();
		if(obj->get_angle() >180 && obj->get_angle() < 270 )
			deg = obj->get_angle() + System::Math::Round(0.5*(270 - obj->get_angle()));
		else
			deg = obj->get_angle() - System::Math::Round(0.5*(obj->get_angle() - 90));
	}
	obj->set_power(false);
	beam^ ra = gcnew beam(p,deg,true);
	return ra;
}
