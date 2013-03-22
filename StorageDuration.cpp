#include<iostream>

using namespace std;

void function()
{
	int autoStorage = 0;//auto storage duration == non static
	static int staticStorage = 0; // static storage duration == static val
	cout << "auto storage = " << autoStorage << "\n";
	cout << "static storage = " << staticStorage << "\n";
 	
	autoStorage++;
	staticStorage++;

}

int main()
{
	for(int i = 0; i < 10; i++)
	{
		function();
	}

	cout << "call function() out side of the loop\n";
	function(); 
	return 0;
}

/*
this program shows the difference between static valiable and non-static(instance)valiable.
As some web site claims, the big difference is their lifetimes:

*instance valiable is a local valiable belonging to function(),
that means the data autoStorage hold is deleted
when the program reaches the end of the function.

change in value:
intialize to be 0 
-> show 0 
-> add 1(by incrementation) 
-> reach the end 
-> release  the value(one cicle is done) 
-> initialize to be 0 
-> show 0 
-> add 1 
-> reach the end 
-> release the value(second cicle is done)
->.....ten times;  

On the other hand,
*life time of the static valiable is until the program is done, 
that means even though program reaches the end of the function, 
the data the staticStorage hold is NOT released. 
Thus, increment keeps adding one by one when this function is called.  
*/
