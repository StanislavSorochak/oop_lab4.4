//////////////////////////////////////////////////////////////////////////////
// Euro.h
#pragma once
#include "Currency.h"
class Euro : public Currency {
private:
	double euros;
public:
	Euro(void);
	Euro(int);
	~Euro(void);
	void setEuros(const int value) { euros = value; }
	double getEuros() { return euros; }
	double convertintohryvnia();
	void Display() const;
};