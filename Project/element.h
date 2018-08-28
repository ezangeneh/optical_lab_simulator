#pragma once

#include"point.h"
#include"beam.h"

public ref class element abstract
{
public:
	element(void);
	element(double X, double Y, double WIDTH, double HEIGHT, int KEY);
	element(element^);
	virtual ~element(void);
	// for set ^ get private member
	void set_key(int);
	void set_x(double);
	void set_y(double);
	void set_width(double);
	void set_height(double);
	int get_key();
	double get_x();
	double get_y();
	double get_width();
	double get_height();
	// virtual function in other object have different behavior
	// for example reflex from lenz is different of mirror
	// for example strike (area) of lenz is different of mirror
	virtual beam ^reflex(beam^)abstract;
	bool strike(beam^ obj,double% len,point^);
	
	// data member
private:
	int key;
	double X;
	double Y;
	double width;
	double height;
};