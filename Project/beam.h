#pragma once
#include"point.h"
public ref class beam
{
public:
	beam();
	beam(point^ start_point, double ANGLE, bool POWER);
	beam(beam^);
	~beam(void);
	void set_angle(double);
	double get_angle();
	void set_start_point(point^);
	point^ get_start_point();
	void set_last_point(point^);
	point^ get_last_point();
	void set_power(bool);
	bool get_power();

private:
	point^ p1;
	point^ p2;
	bool power;
	double angle;
};