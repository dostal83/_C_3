#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a >> b;

	if (a % b == 0)
		cout << a << "\täåëèòñÿ íà " << b;
	else
	{
		cout << a << "íå äåëèòñÿ íà " << b;
		cout << "\nîñòàòîê: " << a % b;
	}
	cout << "\n÷àñòíîå: " << a / b;

	return 0;
}