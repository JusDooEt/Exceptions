/*************************************************
* Program: HW 10a
* ================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
*************************************************/

#include <iostream>
#include <new>
using namespace std;

int main()
{
	const int BASE_SIZE = 500;
	const int DYNAM_SIZE = 50000000;

	double* ptrs[BASE_SIZE];

	for (int i = 0; i < BASE_SIZE; i++)
	{
		try
		{
			ptrs[i] = new double[DYNAM_SIZE];
			cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
		}
		catch (bad_alloc& ba)
		{
			cerr << "bad alloc caught: " << ba.what() << endl;
			exit(1);
		}
			
	}
	system("pause");
	return 0;
}

/* OUTPUT
...
ptr[286] points to 50,000,000 new doubles
ptr[287] points to 50,000,000 new doubles
ptr[288] points to 50,000,000 new doubles
ptr[289] points to 50,000,000 new doubles
ptr[290] points to 50,000,000 new doubles
ptr[291] points to 50,000,000 new doubles
ptr[292] points to 50,000,000 new doubles
bad alloc caught: bad allocation		*/