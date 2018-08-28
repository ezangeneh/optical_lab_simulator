#pragma once
#include "lenz.h"

public ref class oneconvex_lenz : public lenz
{
public:
	oneconvex_lenz();
	oneconvex_lenz(double X, double Y, double WIDTH, double HEIGHT, int KEY,double ANGLE);
	oneconvex_lenz(oneconvex_lenz^);
	~oneconvex_lenz();

	// override virtual function
	virtual beam ^reflex(beam^)override;
};
