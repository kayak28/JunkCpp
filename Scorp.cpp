#include<iostream>
using namespace std;

int x = 555;
/*
	this x is file-scorp variable that is accessable
	from main and created function
*/

void printX()
{
	cout << "from printX()\n";
	cout << "x = " << x << "\n";
}
int main() 
{
	cout << "x = " << x << "\n";
	//use x = 555;
	
	int x = 333;
	/*
	this x is block-scope variable that is acceaable only in side of {}
	in this case in side of main(){}
	*/
	cout << "x = " << x << "\n";
	//use x = 333, because block-scope variable is prioritized. 
	//from now on, x = 555 is hidden.
	for(int i = 0; i < 5; i++)
	{
		int x = i * 100;
		cout << "x = " << x << "\n";
		//use x = 333;
	}
	// at here, x = i*100 is deleted because its lifetime is over
	cout << "x = " << x << "\n";
	//x = 333 get priority back 
	cout << "::x = " << ::x << "\n";
	//::x enable to see the file-scope variable; 
	//another word, enable to ignore given priorty.
	
	printX();
	//this function prints out x = 555, because x = 333 is a local variable 
	//so printX is not allowed to access to x = 333;
	return 0;
}
