#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char a;

	cin >> a;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		cout << "Ýòî áóêâà: \n" << a;
	else
		cout << "Ýòî íå áóêâà, à ñèìâîë:\n" << a;

	return 0;
}