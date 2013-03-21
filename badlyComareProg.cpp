#include<iostream>
using namespace std;

int a;
int b;
int c;
/* we can assign valiables out side of the main;
and their scope will be the end of this file;
these valiable are accessible from both
main function and sort function 
and are given staic-storage duration. 
*/

void swap(int& x, int& y)
{
	// two valiable are replaced each other
	int temp = x;
	x = y;
	y = temp;
}
void sort()
{
	//make three valiables in orger of max to min
	if(a > b)
	{
		swap(a,b);
	}
	if(b > c)
	{
		swap(b,c);
	}
	if(a > b)
	{
		swap(a,b);
	}
}

int main()
{
	cout << "enter the 1st value\n";
	cin >> a;
	cout << "enter the 2nd value\n";
	cin >> b;
	cout << "enter the 3rd value\n";
	cin >> c;
	
	sort();
	
	cout << "the min = " << a <<"\n";
	cout << "the mid = " << b <<"\n";
	cout << "the max = " << c <<"\n";

	return 0;
}






