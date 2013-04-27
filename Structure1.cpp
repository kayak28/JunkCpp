//text on p-248



#include <iostream>
using namespace std;

struct Date
{
	int month;
	int day;
	int year;
} 
struct CDAccount
{
	double initialBalance;
	double interestRate;
	int term;
	Data term;
	double balanceAtMaturity;
}
void getCDData(CDAccount& theAccount);
void getData(Date& theDate);

int main()
{
	CDAccount account;
	cout << "Enter acocunt data on the day account was opend: \n";
	getCDData(account);
	double rateFraction;
	double interest;
	rateFraction = account.interestRate;
}


void getData(Data& theData)
{

}
void getCDData(CDAccount& theAccount)
{
	
	
}
