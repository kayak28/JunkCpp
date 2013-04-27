#include <iostream>
using namespace std;

//Structure for a bank certificate of deposit:
struct CDAccountVl
{
	double balance;
	double interestRate;
	int term;//months until maturity 
};//do not forget semi-corron
void getData(CDAccountVl& theAccount);

int main()
{
	CDAccountVl account;
	getData(account);
	
	double reteFraction;
	double interest;
	
	reteFraction = account.interestRate / 100.0;
	interest = account.balance * (reteFraction * (account.term/12.0));
	//the Dot opereter is used to specify a member
	//variable of a structure variable
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);//how many digit will be shown.(2)shows 10^2
	cout << "when your CD matures in " 
	     << account.term << " months, \n"
	     << "it will have a balance of $ " 
	     << account.balance << "\n";

	return 0;

}
//Uses IOStream
void getData(CDAccountVl& theAccount)
{
	cout << "Enter Account balance $";
	cin >> theAccount.balance;

	cout << "Enter account interest  rate";
	cin >> theAccount.interestRate;
	cout << "Enter the number of months until maturity: ";
	cin >> theAccount.term;
}

