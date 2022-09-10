#include<iostream>
using namespace std;
int main()
{
	char taxCode;
	int opCode, currentNumber, distance, year;
	double x, y, cost, price, taxratepercentage;
	bool leapyear;
	cout << "Enter Tax code" << endl;
	cin >> taxCode;
	cout << "Enter op code" << endl;
	cin >> opCode;
	cout << "Enter current number" << endl;
	cin >> currentNumber;
	cout << "Enter Distance" << endl;
	cin >> distance;
	cout << "Enter year" << endl;
	cin >> year;
	if (taxCode == 'T')
	{
		cout << "Enter price" << endl;
		cin >> price;
		cout << "Enter tax rate percentage of price" << endl;
		cin >> taxratepercentage;
		cout << "New price = " << price + (price * (taxratepercentage / 100)) << endl;
	}
	if (opCode == 1)
	{
		cout << "Enter 1st number " << endl;
		cin >> x;
		cout << "Enter 2nd number " << endl;
		cin >> y;
		cout << "sum of two number is " << x + y << endl;
	}
	if (currentNumber % 2 == 1)
	{
		currentNumber = (3 * currentNumber) + 1;
		cout << "Current number is " << currentNumber << endl;
	}
	else  if (currentNumber % 2 == 0)
	{
		currentNumber = currentNumber / 2;
		cout << "Cutrrent number is " << currentNumber << endl;
	}
	if (year % 4 == 0)
	{
		leapyear = true;
		cout << "This is a leap year" << endl;
	}
	if (year % 4 != 0)
	{
		leapyear = false;
		cout << "This is not a leap year" << endl;
	}

	if (distance >= 0 && distance <= 100)
	{
		cout << "cost = 5.00" << endl;
	}
	if (distance > 100 && distance <= 500)
	{
		cout << "cost = 8.00";
	}
	if (distance > 500 && distance < 1000)
	{
		cout << "cout = 10.00";
	}
	if (distance > 1000)
	{
		cout << "cout = 12.00";
	}
	return 0;
}
