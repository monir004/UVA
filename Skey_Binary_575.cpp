#include<iostream>
#include<string>
using namespace std;

int func(int i)
{
	int res = 1;
	for (int j = 0; j < i; j++)
	{
		res *= 2;
	}
	return res - 1;
}

int main()
{
	string num;
	while (cin >> num)
	{
		if (num == "0") break;
		int decimalSum = 0;
		int i = 0;
		for(int j=num.length()-1; j>=0; j--)
		{
			i++;
			int rem = num[j] - '0';
			decimalSum += rem * func(i);
		}
		cout << decimalSum << endl;
	}

	return 0;
}
