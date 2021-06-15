#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");	int staj, yo;	cout << "Ââåäèòå ñâîé ñòàæ ðàáîòû: ";	cin >> staj;	cout << "Ñêîëüêî âàì ëåò: ";	cin >> yo;	if (staj >= 20 && yo <= 42)		cout << "Âû ïðèíÿòû";	else		cout << "Âû íå ïðèíÿòû";	return 0;}
