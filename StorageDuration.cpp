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
	return 0;
}
