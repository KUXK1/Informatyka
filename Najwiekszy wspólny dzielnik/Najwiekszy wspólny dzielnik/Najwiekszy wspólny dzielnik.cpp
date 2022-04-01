// Najwiekszy wspólny dzielnik.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Podaj liczbe a";
    cin >> a;
    cout << "Podaj liczbe b";
    cin >> b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    cout << a << " Jest najwiekszym wspólnymd dzielnikiem";
}


