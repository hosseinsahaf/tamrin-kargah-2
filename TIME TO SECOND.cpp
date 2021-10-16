
#include <iostream>
using namespace std;
int main()
{
	
	int h, m, s,a;
	cout << "please enter the hour :";
	cin >> h;
	cout << "please enter minute :";
	cin >> m;
	cout << "please enter the second :";
	cin >> s;
	cout << "the clock is:" << h << ":" << m << ":" << s;
	cout << system("cls");
	a = (h * 3600) + (m * 60) + s;
	cout << "your second:"<< a;
	return 0;
}