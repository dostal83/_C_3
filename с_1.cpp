#include <iostream>
using namespace std;

int main(){	setlocale(LC_ALL, "rus");	int a, b;	cout << "Ââåäèòå ÷åòíîå è íå÷åòíîå:\n";	cin >> a >> b;	if ((a == b) && (a % 2 == 1))		cout << "îáà íå÷åòíûå: " << b << "\t" << a;	else if (a % 2 == 1)		cout << "íå÷åòíîå: " << a;		else if ((a == b) && (a % 2 != 1))		cout << " ";	else 		cout<< "íå÷åòíîå: " << b;	return 0;}
