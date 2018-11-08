#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int tests;
	cin >> tests;
	bool isCorrect = true;
	string pass, input;
	for (int t = 0; t < tests; ++t)
	{
		isCorrect = true;
		cin >> pass;
		cin >> input;
		for (int i = 0; i < pass.length(); ++i)
		{
			if (pass.length() != input.length())
			{
				isCorrect = false;
				break;
			}
			if (input[i] != pass[i] && input[i] != '*')
			{
				isCorrect = false;
				break;
			}

		}
		if (isCorrect)
			cout << "ok\n";
		else
			cout << "error\n";
	}
	return 0;
}