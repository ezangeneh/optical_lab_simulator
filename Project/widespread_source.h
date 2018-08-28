#pragma once
#include "source.h"

public ref class widespread_source : public source
{
public:
	widespread_source(void);
	widespread_source(double X, double Y, double WIDTH, double HEIGHT,int KEY, int NumberOfbeams);
	widespread_source(widespread_source ^ obj);
	~widespread_source(void);

	// set ^ get private data member
	void set_num_beams(int num);
	int get_num_beams();
	void set_point(point^ num);
	point^ get_point();
	// data memeber
private:
	int num_beams;
	point^ p1;
};
