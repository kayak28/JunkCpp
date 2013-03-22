#include <iostream>
using namespace std;
//Function Prototype Dclaration: mul()
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
/*
g++ -c FileName.cpp// NOT contain main
g++ -c FileNameMain.cpp //contains main
g++ -o executableFilename FileNameMain.o FileName.o
//where executableFilename is voluntary
way to complie c++ from terminal....

*/
