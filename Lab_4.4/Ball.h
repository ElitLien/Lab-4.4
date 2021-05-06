//////////
// Ball.h
//////////

#pragma once
#include"Body.h"

class Ball : public Body
{
public:
	Ball();
	Ball(int a);
	virtual double Plos();
	virtual double Obj();
	virtual void Read();
	virtual void Print();
};

