#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	int a,b;
	a= rand() % 6 + 1;
	cout << "press 1 to roll the dice :";
	cin >> b;
	if (b == 1)
	{
		cout << a;
	}
	if(a==6)
	{
		cout << "congratulation!!! press 1 to roll again :";
		cin >> b;
		system("cls");
		cout << a;
	}
	


	/*

	for  ( int i = 0; i< 1; i++)
	{
		cout << rand() % 6 + 1;
	
		while ( i ==6)
		{
			cout<< rand () % 6 + 1;

		}


	}*/

	return 0;
}
