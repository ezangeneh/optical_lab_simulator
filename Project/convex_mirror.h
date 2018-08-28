#pragma once
#include "mirror.h"

public ref class convex_mirror : public mirror
{
public:
	convex_mirror();
	convex_mirror(double X, double Y, double WIDTH, double HEIGHT,int KEY, double ANGLE);
	convex_mirror( convex_mirror^);
	~convex_mirror();

	// override virtual function
	virtual beam ^reflex(beam^)override ;
};