#include "pch.h"
#include <iostream>

using namespace std;

void PrintFloat(float a)
{
	unsigned char * const bytes = (unsigned char *)&a;
	cout << hex << (int)bytes[3] << " "
		 << hex << (int)bytes[2] << " "
		 << hex << (int)bytes[1] << " "
		 << hex << (int)bytes[0] << endl;
}

int main()
{
	int t;
	cin >> t;
	float num;
	for (int i = 0; i < t; i++)
	{
		cin >> num;
		PrintFloat(num);
	}
}
