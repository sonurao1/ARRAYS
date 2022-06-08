#include<iostream>
using namespace std;

int main()
{
	int m;
	int n;
	cin >> m;
	cin >> n;
	int arr[m][n];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	int sr = 0;
	int er = m - 1;
	int sc = 0;
	int ec = n - 1;
	while (sr <= er && sc <= ec)
	{

		for (int col = sc; col <= ec; col++)
		{
			cout << arr[sr][col] << "," << " ";
		}
		sr++;

		for (int row = sr; row <= er; row++)
		{
			cout << arr[row][ec] << "," << " ";
		}
		ec--;

		if (sr <= er)
		{
			for (int col = ec; col >= sc; col--)
			{
				cout << arr[er][col] << "," << " ";
			}
			er--;
		}

		if (sc <= ec)
		{
			for (int row = er; row >= sr; row--)
			{
				cout << arr[row][sc] << "," << " ";
			}
			sc++;
		}

	}

	cout << "END";
	return 0;
}
