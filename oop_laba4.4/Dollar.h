//////////////////////////////////////////////////////////////////////////////
// Dollar.h
#pragma once
#include "Currency.h"
class Dollar : public Currency {
private:
	double dollars;
public:
	Dollar(void);
	Dollar(int);
	~Dollar(void);
	void setDollars(const int value) { dollars = value; }
	double getDollars() { return dollars; }
	double convertintohryvnia();
	void Display() const;
};