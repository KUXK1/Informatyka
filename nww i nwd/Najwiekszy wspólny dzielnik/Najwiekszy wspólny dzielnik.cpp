// Najwiekszy wspólny dzielnik.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int a1;
    int b1;
    int nww;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    a1 = a;
    b1 = b;

    while (a1 != b1)
    {
        if (a1 > b1)
        {
            a1 = a1 - b1;
        }
        else
        {
            b1 = b1 - a1;
        }
    }

    cout << a1 << " Jest najwiekszym wspólnym dzielnikiem"<< endl;
    nww = a * b / a1;
    cout << nww << " Jest najmniejszy wspólna wielokrotność";
}


