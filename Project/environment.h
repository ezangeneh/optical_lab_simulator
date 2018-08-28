#pragma once
#include<vector>
#include"element.h"
using namespace std;

public ref class environment
{
public:
	environment(void);
	environment(double width, double height);
	environment(environment^ obj);
	~environment(void);
	// public member function
	bool isempty();
	void resize(int key, double x, double y);
	void relocation(int key, double x, double y);
	void clearall();
	void run();
	void add_element(element^ ptr);
	void remove_element(int KEY);
	array<element^> ^ar1;
	array<beam^> ^ar2;
	//set ^ get data member
	void set_width(double);
	void set_height(double);
	double get_width();
	double get_height();
	// private data member
private:
	// utility function
	void en_strike(beam^ obj);
	double width;
	double height;
};