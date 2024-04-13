/*************************************************
* Program: HW 10b
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/

#include <iostream>
using namespace std;

int getNumber();

int main()
{
	const int MAX_NUMS = 5;
	int sum = 0;

	cout << "Enter " << MAX_NUMS << " positive numbers (Only numbers greater than zero)\n";
	
	for (int i = 0; i < 5; i++)
	{
		sum += getNumber();
	}

	cout << "The sum of the numbers is " << sum << ".\n";

	system("pause");
	return 0;
}

int getNumber()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	try {
		if (num > 0)
			return num;
		else
			throw "Error. You did not enter a positive number!";
	}
	catch (const char* errorMsg)
	{
		cout << errorMsg << endl;
		system("pause");
		exit(1);
	}
}

/* OUTPUT without an error
Enter 5 positive numbers (Only numbers greater than zero)
Enter a number: 2
Enter a number: 3
Enter a number: 5
Enter a number: 7
Enter a number: 9
The sum of the numbers is 26.
Press any key to continue . . . */

/* OUTPUT with an error
Enter 5 positive numbers (Only numbers greater than zero)
Enter a number: 1
Enter a number: 2
Enter a number: 3
Enter a number: -4
Error. You did not enter a positive number!
Press any key to continue . . . */