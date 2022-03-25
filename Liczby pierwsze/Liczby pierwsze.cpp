// Liczby pierwsze.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
	int lp=0;
	
	int p = 2;
	int dot = 0;
	

	
	cout << " ile licz pierwszych";
    cin >> n;
	cout << " liczby pierwsze to:";
	while(lp < n)
	{
		dot = 0;
		for (int d = 2; d <= p - 1; d++) 
		{
			if (p % d == 0) {
				dot =  1;
			}

		}
		
		if (dot == 0) {
			cout << p << ",";
			lp = lp + 1;
		}
		
		p = p + 1;
	}

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
