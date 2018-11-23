#include <iostream>
using namespace std;

int main()
{
	int n, wejscie;
	while (true)
	{
		cin >> wejscie;
		if (wejscie == 0) 
			break;
		if (wejscie < 0)
			n = wejscie * (-1);
		if (wejscie > 0)
			n = wejscie;
		char** wiatraczek = new char*[2 * n];
		for (int i = 0; i < 2 * n; ++i)
		{
			wiatraczek[i] = new char[2 * n];
			for (int j = 0; j < 2 * n; ++j)
			{
				wiatraczek[i][j] = '.';
			}
		}

		if (wejscie > 0)
		{
			for (int i = 0, p = 0; i < n; i++, p++)
			{
				wiatraczek[n - p - 1][n - p - 1] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n - p - 1][n - p - 1 - k] = '*';
				wiatraczek[n - p - 1][n + p] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n - p - 1 - k][n + p] = '*';
				wiatraczek[n + p][n - p - 1] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n + p + k][n - p - 1] = '*';
				wiatraczek[n + p][n + p] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n + p][n + p + k] = '*';
			}
		}
		if (wejscie < 0)
		{
			for (int i = 0, p = 0; i < n; i++, p++)
			{
				wiatraczek[n - p - 1][n - p - 1] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n - p - 1 - k][n - p - 1] = '*';

				wiatraczek[n - p - 1][n + p] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n - p - 1][n + p + k] = '*';

				wiatraczek[n + p][n - p - 1] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n + p][n - p - 1 - k] = '*';

				wiatraczek[n + p][n + p] = '*';
				for (int k = 1; k + p < n; k++)
					wiatraczek[n + p + k][n + p] = '*';
			}
		}

		for (int i = 0; i < 2 * n; i++)
		{
			for (int k = 0; k < 2 * n; k++)
			{
				cout << wiatraczek[i][k];
			}
			cout << endl;
		}
	}

	return 0;
}