#pragma once
#include "mirror.h"

public ref class sole_mirror : public mirror
{
public:
	sole_mirror();
	sole_mirror(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE);
	sole_mirror(sole_mirror^);
	~sole_mirror();

	// override virtual function
	virtual beam ^reflex(beam^)override;
	
};
