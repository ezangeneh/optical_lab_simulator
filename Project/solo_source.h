#pragma once
#include "source.h"

public ref class solo_source : public source
{
public:
	solo_source();
	solo_source(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE);
	solo_source(solo_source^ obj);
	~solo_source(void);

	// set ^ get private data member
	void set_angle(double ANGLE);
	double get_angle();
	void set_point(point^ num);
	point^ get_point();
	// data memeber
private:
	double angle;
	point^ p1;
};
