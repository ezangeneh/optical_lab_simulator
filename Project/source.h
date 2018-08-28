#pragma once
#include "element.h"

public ref class source: public element
{
public:
	source();
	source(double X, double Y, double WIDTH, double HEIGHT, int KEY);
	source(source^);
	virtual ~source(void);
	// override virtual function
	virtual beam ^reflex(beam^)override;
	// public data member 
	array<beam^> ^beams;
};