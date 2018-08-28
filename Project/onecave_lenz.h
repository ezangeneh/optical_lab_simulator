#pragma once
#include "lenz.h"

public ref class onecave_lenz : public lenz
{
public:
	onecave_lenz();
	onecave_lenz(double X, double Y, double WIDTH, double HEIGHT, int KEY,double ANGLE);
	onecave_lenz(onecave_lenz^);
	~onecave_lenz();

	// override virtual function
	virtual beam ^reflex(beam^)override;
};
