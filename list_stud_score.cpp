#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> l(n);
	for (int i = 0; i < n; i++)
	{
		std::string id, score;
		std::cin >> id >> score;
		l[i] = {std::stoi(score), -std::stoi(id)};
	}
	std::sort(l.begin(), l.end());
	std::reverse(l.begin(), l.end());
	for (auto now : l)
	{
		std::cout << now.second * -1 << " " << now.first << std::endl;
	}
	return 0;
}