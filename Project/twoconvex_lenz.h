#pragma once
#include "lenz.h"

public ref class twoconvex_lenz : public lenz
{
public:
	twoconvex_lenz();
	twoconvex_lenz(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE);
	twoconvex_lenz(twoconvex_lenz^);
	~twoconvex_lenz();

	// override virtual function
	virtual beam ^reflex(beam^)override;
};
