#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int>arr;
	int value;
	int i;
	int total_array_elements = 0;
	while (cin >> value)
	{
		total_array_elements++;
		i = 0;
		for (i = 0; i < arr.size(); i++)
		{
			if (arr[i] >= value) break;
		}
		vector<int>::iterator it = arr.begin();
		arr.insert(it + i, value);
		if (total_array_elements % 2 == 1)
		{
			cout << arr[total_array_elements / 2] << endl;
		}
		else {
			cout << (arr[total_array_elements / 2] + arr[total_array_elements / 2 - 1]) / 2 << endl;
		}
	}

	return 0;
}
