//////////////////////////////////////////////////////////////////////////////
// Dollar.cpp
#include "Dollar.h"
#include <cmath>
#include <iostream>
using namespace std;
Dollar::Dollar(void)
{}
Dollar::Dollar(int n) {
	int a = n;
	if (a > 0)
		setDollars(a);
}
Dollar::~Dollar(void) {}
double Dollar::convertintohryvnia() {
	return getDollars() * 27.9;
}

void Dollar::Display() const
{
	int a = this->dollars;
	cout << "number of dollars = " << a << endl;
}