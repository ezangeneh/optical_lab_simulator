#pragma once
#include "mirror.h"

public ref class cave_mirror : public mirror
{
public:
	cave_mirror();
	cave_mirror(double X, double Y, double WIDTH, double HEIGHT, int KEY, double ANGLE);
	cave_mirror(cave_mirror^);
	~cave_mirror();

	// override virtual function
	virtual beam ^reflex(beam^)override;
};