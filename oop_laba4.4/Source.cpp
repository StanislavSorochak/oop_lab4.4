#include <iostream>
#include "Currency.h"
#include "Euro.h"
#include "Dollar.h"
using namespace std;
int main()
{
	Dollar d(54);
	d.Display();
	cout << "Dollars in UAN = " << d.convertintohryvnia() << endl;
	Euro e;
	e.setEuros(700);
	e.Display();
	cout << "Euros in UAN = " << e.convertintohryvnia() << endl;
	return 0;
};