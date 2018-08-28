#pragma once
#include "source.h"
public ref class parallel_source : public source
{
public:
	parallel_source(void);
	parallel_source(double X, double Y, double WIDTH, double HEIGHT, int KEY, int NumberOfbeams,double ANGLE);
	parallel_source(parallel_source^ obj);
	~parallel_source(void);

	// set ^ get private data member
	void set_angle(double ANGLE);
	void set_num_beams(int num);
	double get_angle();
	int get_num_beams();
	
	// data memeber
private:
	double angle;
	int num_beams;

};