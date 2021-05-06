//////////
// Body.h
//////////

#pragma once
#include <iostream>
#include <string>

class Body
{
private:
	int a;
public:
	Body();
	Body(int a);

	void setA(int a) { this->a = a; }
	int getA() const { return a; }


	virtual void Read() = 0;
	virtual double Plos() = 0;
	virtual double Obj() = 0;
	virtual void Print() = 0;
	void Work();
};
