  
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x;
	cin >> x;

	if (x < 7)
		cout << "äîøêîëüíèê";
	else if (x < 18)
		cout << "ó÷åíèê";
	else if (x < 60)
		cout << "ðàáî÷èé";
	else
		cout << "ïåíñèîíåð";
	
	return 0;
}