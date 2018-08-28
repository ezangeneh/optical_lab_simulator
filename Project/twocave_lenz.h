#pragma once
#include "lenz.h"

public ref class twocave_lenz : public lenz
{
public:
	twocave_lenz();
	twocave_lenz(double X, double Y, double WIDTH, double HEIGHT, int KEY,double ANGLE);
	twocave_lenz(twocave_lenz^);
	~twocave_lenz();

	// override virtual function
	virtual beam ^reflex(beam^)override;
};
