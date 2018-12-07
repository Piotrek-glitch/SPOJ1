#include<iostream>
using namespace std;

int main()
{
	int t,v1,v2;       // liczba testów
	cin >> t;   // wprowadzanie liczby testow

		for (int i = 1; i <= t; i++)
		{
			cin >> v1 >> v2;
			cout << (2 * v1*v2) / (v1 + v2) << endl;

		}
    return 0;
}
