#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int tests, x, y;
	cin >> tests;
	for (int i = 0; i < tests; i++)
	{
		cin >> x >> y;
		int** tab = new int*[x];
		for (int j = 0; j < x; j++)
		{
			tab[j] = new int[y];
		}
		for (int j = 0; j < x; j++)
		{
			for (int k = 0; k < y; k++)
			{
				cin >> tab[j][k];
			}
		}
		for (int j = 0; j < x; j++)
		{
			for (int k = 0; k < y; k++)
			{
				if (k != y - 1 && j == 0)
					cout << tab[j][k + 1] << " ";
				else if (k == y - 1 && j != x - 1)
					cout << tab[j + 1][k] << " ";
				else if (k != 0 && j == x - 1)
					cout << tab[j][k - 1] << " ";
				else if (k == 0 && j != 0)
					cout << tab[j - 1][k] << " ";
				else
					cout << tab[j][k] << " ";

			}
			cout << "\n";
		}

	}
	return 0;
}
