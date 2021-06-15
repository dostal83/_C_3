#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x;
    if (x > 0) 
        y = 2 * x - 10;
    else
        if (x == 0) 
            y = 0;
        else
            y = 2 * abs(x) - 1;
    cout << y;
}