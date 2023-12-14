#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, std::string>> v(n);
	for (int mat, phy, inf, i = 0; i < n; i++)
	{
		std::string fname, lname;
		std::cin >> fname >> lname >> mat >> phy >> inf;
		v[i] = {mat + phy + inf, fname + " " + lname};
	}
	std::stable_sort(v.begin(), v.end(), [](const std::pair<int, std::string> &a, const std::pair<int, std::string> &b)
					 { return a.first / 3.0 > b.first / 3.0; });
	for (auto now : v)
	{
		std::cout << now.second << std::endl;
	}
	return 0;
}