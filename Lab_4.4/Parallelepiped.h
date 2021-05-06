////////////////////
// Parallelepiped.h
////////////////////

#pragma once
#include "Body.h"

using namespace std;

class Parallelepiped : public Body
{
private:
	int b, c;
public:
	Parallelepiped();
	Parallelepiped(int a, int b, int c);

	void setB(int b) { this->b = b; }
	void setC(int c) { this->c = c; }
	int getB() const { return b; }
	int getC() const { return c; }

	virtual double Plos();
	virtual double Obj();
	virtual void Read();
	virtual void Print();
};

