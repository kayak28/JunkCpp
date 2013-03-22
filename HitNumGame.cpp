//main program of hit num game

#include <iostream>
using namespace std;
void start();// create a question
int judge(int cand);//judge correct asn or not,Return 0 if cand is right
int input();//accept answer between 0 to max
int askContinuance();//asle users keep playing or not

int maxNum = 9;

int main()
{
	cout << "Guess number between 0 to " << maxNum << "!! \a\n\n";
	
	do
	{
		int judgement; 
		start();
		do
		{
			judgement = judge(input());
			if(judgement > 0)
			{
				cout << "the ans is SMALLER than your guess\n";
			}
			else if(judgement < 0)
			{
				cout << "the ans is BIGGER than your guess\n";
			}
		}while (judgement != 0);
		cout << "You got the answer" << judgement << "!!!!\n";
	}while(askContinuance());
	
	return 0;
} 
