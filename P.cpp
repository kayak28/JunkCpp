#include<iostream>
using namespace std;

int main()
{
	int andy;
	int fred;
	int ted;
	andy = 25;
	fred = andy;
	ted = &andy;//invarid conversion from int* to int

	cout << "andy = " << andy;
	cout << "\n fred = " << fred;
	cout << "\n ted = " << ted;

	return 0;
}
