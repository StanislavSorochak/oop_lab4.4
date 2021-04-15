//////////////////////////////////////////////////////////////////////////////
// Euro.cpp
#include "Euro.h"
#include <cmath>
#include <iostream>
using namespace std;
Euro::Euro(void)
{}
Euro::Euro(int n) {
	int a = n;
	if (a > 0)
		setEuros(a);
}
Euro::~Euro(void) {}
double Euro::convertintohryvnia() {
	return getEuros() * 33.18;
}

void Euro::Display() const
{
	int a = this->euros;
	cout << "number of euros = " << a << endl;
}