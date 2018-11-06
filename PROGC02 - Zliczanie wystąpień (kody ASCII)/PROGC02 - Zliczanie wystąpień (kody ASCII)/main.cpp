#include <iostream>
using namespace std;

int main()
{
	int charTab[256] = {};
	int input;
	while ((input = getchar()) != EOF)
	{
		charTab[input]++;
	}
	for (int i = 0; i < 256; ++i)
	{
		if (charTab[i] != 0)
			cout << i << " " << charTab[i] << "\n";
	}
	return 0;
}