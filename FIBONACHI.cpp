#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 1, n,c;
	cout << "how many fibonachi do you want :";
	cin >> n;
	cout << a<<",";
	cout << b << ",";
	int i = 2;
	while (i<n)
	{
		c = a + b;
		cout << c<<",";
		a = b;
		b = c;
			i++;
	}
	return 0;

}