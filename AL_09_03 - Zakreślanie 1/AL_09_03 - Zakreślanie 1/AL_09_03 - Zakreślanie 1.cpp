#include "pch.h"
#include <iostream>

using namespace std;

struct Point
{
	long x, y;
};

long long determinant(Point a, Point b, Point c)
{
	long long d = (a.x*b.y) + (b.x*c.y) + (c.x*a.y) - (c.x*b.y) - (a.x*c.y) - (b.x*a.y);
	return d;
}

int main()
{
	Point a, b, c;
	long tests;
	bool collinear;
	long points;
	cin >> tests;
	for (long i = 0; i < tests; i++)
	{
		collinear = true;
		cin >> points;
		cin >> a.x >> a.y;
		if (points > 1)
			cin >> b.x >> b.y;
		if (points > 2)
		{
			for (long j = 0; points - 2; j++)
			{
				cin >> c.x >> c.y;
				if (determinant(a,b,c) != 0)
					collinear = false;
			}
		}
		if (collinear)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	return 0;
}
