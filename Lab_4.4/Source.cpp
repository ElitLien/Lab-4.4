//////////////
// Source.cpp
//////////////

#include <iostream>
#include "Parallelepiped.h"
#include "Body.h"
#include "Ball.h"

using namespace std;

int main()
{
	Ball a;
	a.Work();
	Parallelepiped b;
	b.Work();

	Body* A = new Ball();
	Body* B = new Parallelepiped();


	cout << typeid(A).name() << endl;
	cout << typeid(*A).name() << endl;
	cout << typeid(B).name() << endl;
	cout << typeid(*A).name() << endl;

	Body* N[2];
	N[0] = &a;
	N[1] = &b;
	N[0]->Print();
	N[1]->Print();

	return 0;
}