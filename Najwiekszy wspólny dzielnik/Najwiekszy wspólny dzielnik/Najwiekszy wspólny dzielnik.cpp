// Najwiekszy wspólny dzielnik.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    
    int iloczyn;
    int nww;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    iloczyn = a * b;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    cout << a << " Jest najwiekszym wspólnym dzielnikiem"<< endl;
    nww = iloczyn / a;
    cout << nww << " Jest najmniejszy wspólna wielokrotność";
}


