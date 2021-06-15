#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int x, n;
	
	cin >> x;
	cout << "Âî ÷ňî ďĺđĺâĺńňč?\n---÷ňîáű ďĺđĺâĺńňč â áŕéňű: ââĺäčňĺ 1---\n---ęčëîáŕéňű: 2---\n";
	cin >> n;

	switch (n)
	{
		case 1:
			cout << x * 1024;
			break;
		case 2:
			cout << x / 1024.0;
			break;
		default:
			cout << "ââĺäčňĺ ďî číńňđóęöčč";
	}


	return 0;
}