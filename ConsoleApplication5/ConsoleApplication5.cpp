#include <iostream>
#include <map>
using namespace std;
#include "Fine.h"
#include "Car.h"
void main()
{
	map<Car , Fine>DYP;
	Car c1("Toyota", "Prius", 1990 );
	Fine f1(120, "03/03/2020" );
	Fine temp(DYP[c1] = f1);
	temp.show();
}