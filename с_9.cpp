#include <iostream>
#include <cmath>
using namespace std;

int main(){    setlocale(LC_ALL, "rus");    float x, y, r, h;

    cout << "Êîîðäèíàòû òî÷êè: ";
    cin >> x >> y;
    cout << "Ðàäèóñ êðóãà: ";
    cin >> r;

    h = sqrt(x * x + y * y);
    cout << "Ãèïîòåíóçà ðàâíà " << h;

    if (h > r)
        cout << "Òî÷êà íå ïðèíàäëåæèò êðóãó.\n";    else         cout<<"\nÒî÷êà ïðèíàäëåæèò êðóãó.\n";	return 0;}