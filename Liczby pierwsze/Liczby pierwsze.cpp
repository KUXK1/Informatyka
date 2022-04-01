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
