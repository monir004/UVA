#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int test_case;
	cin >> test_case;
	while (test_case--)
	{
		int N; cin >> N;
		vector<bool>arr(N + 1, false);
		int political_Parties;
		cin >> political_Parties;
		for (int i = 0; i < political_Parties; i++)
		{
			int h; cin >> h;
			for (int j = h; j <= N; j += h)
				arr[j] = true;
		}
		int j = 0, working_days_lost = 0;
		for (int i = 1; i <= N; i++)
		{
			if (j == 5) {
				i += 1; j = 0;
				continue;
			}
			if (arr[i] == true) working_days_lost++;
			j++;
		}
		cout << working_days_lost << endl;
		arr.clear();
	}

	return 0;
}
