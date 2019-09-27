#include<iostream>

using namespace std;

int main()
{
	int T; cin >> T;
	int arr[3];
	for (int i = 1; i <= T; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			int num; cin >> num; arr[j]=num;
		}
		for (int j = 0; j < 3; j++)
		{
			for (int k = j + 1; k < 3; k++)
			{
				if (arr[k] < arr[j])
				{
					int temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
			}
		}
		cout << "Case "<<i<<": "<<arr[1] << endl;
	}

	return 0;
}
