  
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;

	cout << "Ââåäèòå òðè ðàçíûõ ÷èñëà:\n";
	cin >> a >> b >> c;

	if (a << b >> c or c << b >> a)
		cout << "ñðåäíåå: " << b;
	else if (b << a >> c or c << a >> b)
		cout << "ñðåäíåå: " << a;
	else
		cout << "ñðåäíåå: " << c;

	return 0;
}