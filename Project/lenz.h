#pragma once
#include "element.h"

public ref class lenz abstract:public element
{
public:
	lenz();
	lenz(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE);
	lenz(lenz^);
	virtual ~lenz(void);
	// set ^ get data member
	void set_angle(double);
	double get_angle();
	// override virtual function  
	// data member
private:
	double angle;
};