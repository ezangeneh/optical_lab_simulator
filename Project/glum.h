#pragma once
#include"element.h"

public ref class glum : public element
{
public:
	glum();
	glum(double X, double Y, double WIDTH, double HEIGHT, int KEY);
	glum(glum^);
	~glum(void);
	// override virtual function 
	virtual beam ^reflex( beam^)override;

};