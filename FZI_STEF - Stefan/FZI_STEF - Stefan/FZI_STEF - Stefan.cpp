// FZI_STEF - Stefan.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long long KedaneMaxSubsequence(int a[], int b)
{
	long long maxSubsequence = 0;
	long long maxEndingHere = 0;
	for (int i = 0; i < b; i++)
	{
		maxEndingHere += a[i];
		if (maxEndingHere < 0)
		{
			maxEndingHere = 0;
		}
		if (maxSubsequence < maxEndingHere)
		{
			maxSubsequence = maxEndingHere;
		}
	}
	return maxSubsequence;
}


int main()
{
	int b;
	cin >> b;
	int *tab = new int[b];
	for (int i = 0; i < b; i++)
	{
		cin >> tab[i];
	}
	cout << KedaneMaxSubsequence(tab, b);
	delete[] tab;
	return 0;
}

