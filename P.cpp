#include<iostream>
using namespace std;

int main()
{
	int andy;
	int fred;
	int *ted;//change int to int* 
	andy = 25;
	fred = andy;
	ted = &andy;//3rd statement
	/**
	if defining int ted, 
	then ted = &andy does not execute because
	"invalid conversion from int to int* "
	**/
	
	cout << "andy = " << andy;
	cout << "\nfred = " << fred;
	cout << "\nted = " << ted << "\n";

	return 0;
}
/**
result: 
andy = 25
fred = 25 
ted = 0xbff823f4 

3rd statment copies to ted not the value costained in andy but a reference to it(i.e., its address, which is 0xbff823f4 at the time).
the reason is that in this 3rd statment operation we have preseded the identifier andy with the reference operator(&).
Therefor, we are no longer referring to the value of andy but to its referece
(its address in memory)

*/




