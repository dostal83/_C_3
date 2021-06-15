#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "Òðåóãîëüíèê íå ñóùåñòâóåò";
    else if (a != b && a != c && b != c)
        cout << "Ðàçíîñòîðîííèé";
    else if (a == b && b == c)
        cout << "Ðàâíîñòîðîííèé";
    else        cout << "Ðàâíîáåäðåííûé";	return 0;}