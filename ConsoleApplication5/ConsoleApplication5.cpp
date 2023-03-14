#include <iostream>
#include <map>
using namespace std;
#include "Fine.h"
#include "Car.h"
void main()
{
	map<Car, Fine>DYP;
	Car c1("Toyota", "Prius", 1990 );
	Fine f1(120, "03/03/2020" );

	Car c2 ("Toyota", "Prius", 1994 );
	Fine f2 (100, "03/03/2021" );

	Fine temp(DYP[c2] = f2);
	temp.show();
}