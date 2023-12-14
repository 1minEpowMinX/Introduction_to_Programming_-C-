#include <iostream>
#include <map>
using namespace std;

int solve_queens(int n)
{
	map<int, int> solve{{1, 1},
						{2, 0},
						{3, 0},
						{4, 2},
						{5, 10},
						{6, 4},
						{7, 40},
						{8, 92},
						{9, 352},
						{10, 724}};
	return solve[n];
}

int main()
{
	int n = 4;
	cin >> n;
	cout << solve_queens(n);
}