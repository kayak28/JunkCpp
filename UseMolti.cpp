#include <iostream>
using namespace std;
//Prototype of function, mul()
double mul(double x, double y);

int main()
{
	double a = 0.354;
	double b = 2.957;
	
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	cout << "a * b = " << mul(a,b) << "\n";

	return 0;

}
