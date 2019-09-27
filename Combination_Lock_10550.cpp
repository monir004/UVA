
#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	int d, a, b, c;

	while (cin >> a >> b >> c >> d)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		int countPos = 120;

		if (a - b > 0) countPos += a - b;
		else countPos += 40 + a - b;

		if (c-b>0) countPos += c - b;
		else countPos += 40 + c - b;

		if (c-d >0) countPos += c - d;
		else countPos += 40 + c - d;

		cout << countPos * 9 << endl;
	}

	return 0;
}
