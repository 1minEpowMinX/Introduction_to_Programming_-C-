#include <iostream>
using namespace std;

int X[10], D1[20], D2[20];
int N, sum;

void queens(int y)
{
	for (int x = 0; x < N; x++)
		if (!X[x] && !D1[x + y] && !D2[x - y + N])
			if (y == 0)
				sum += 1;
			else
			{
				X[x] = D1[x + y] = D2[x - y + N] = 1;
				queens(y - 1);
				X[x] = D1[x + y] = D2[x - y + N] = 0;
			}
}

int main()
{
	cin >> N;
	queens(N - 1);
	cout << sum;
	return 0;
}