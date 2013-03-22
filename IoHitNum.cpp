//IoHitNum is used input and output jobs

#include <iostream>
using namespace std;

extern int maxNum;

static void showMsg()
{
	cout << "Enter a number that is between 0 to "<< maxNum << "\n";
}
int input()
{
	int num;
	do 
	{
		showMsg();
		cin >> num;
	}while(num < 0 || num > maxNum);
	
	return num;
}
int askContinuance()
{
	int cont;
	cout << "Would you like to play again??\n";
	cout << "<Yes -- 1 OR No -- 0>: ";
	cin >> cont;

	return cont;
} 



