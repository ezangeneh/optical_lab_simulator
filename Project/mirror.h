#pragma once
#include "element.h"

public ref class mirror abstract:public element
{
public:
	mirror();
	mirror(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE);
	mirror(mirror^);
	virtual ~mirror(void);
	// set ^ get data member
	void set_angle(double);
	double get_angle();
	// override virtual function  
	// data member
private:
	double angle;
};
