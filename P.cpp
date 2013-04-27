#include<iostream>
using namespace std;

int main()
{
	int andy;
	int fred;
	int *ted;//change int to int* 
	andy = 25;
	fred = andy;
	ted = &andy;

	cout << "andy = " << andy;
	cout << "\nfred = " << fred;
	cout << "\nted = " << ted << "\n";

	return 0;
}
