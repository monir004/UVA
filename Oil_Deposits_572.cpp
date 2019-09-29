#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<cstdio>

using namespace std;

int m, n, cont;
vector<vector<char>>v(100, vector<char>(100));  //2d vector with fixed row and size.....
char ch;
bool visited[100][100];

int di[] = { 1,1,1,-1,-1,-1,0,0 };
int dj[] = { 1,0,-1,1,0,-1,1,-1 };

void dfs(int a, int b)
{
	visited[a][b] = 1;
	int I, J;
	for (int i = 0; i < 8; i++)
	{
		I = a + di[i];
		J = b + dj[i];
		if (I >= 0 && I < m && J >= 0 && J < n && !visited[I][J])
		{
			visited[I][J] = 1;
			if (v[I][J] == '@')
				dfs(I, J);
		}

	}
}


int main()
{

    //freopen("input2.txt", "r", stdin);
    //freopen("output2.txt", "w", stdout);
	while (1) {
		cin >> m >> n;
		if (m == 0) break;


		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++) {
				cin >> ch;
				v[i][j]=ch;
			}
		}
		cont = 0;
		memset(visited, 0, sizeof(visited));
		//memset only works with 0 and -1
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (visited[i][j] == 0)
				{
					visited[i][j] = 1;
					if (v[i][j] == '@') {
						cont++;
						dfs(i, j);
					}
				}
			}
		}
		cout << cont << endl;

	}
}
