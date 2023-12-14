#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::pair<int, int>> xy(n);

	for (int x, y, i = 0; i < n && std::cin >> x >> y; i++)
	{
		xy[i] = {x, y};
	}

	std::sort(xy.begin(), xy.end(), [](const std::pair<int, int> &el1, const std::pair<int, int> &el2) // тут можно заюзать переменную с типом auto от С++14
			  { return el1.first * el1.first + el1.second * el1.second < el2.first * el2.first + el2.second * el2.second; });

	for (auto now : xy)
	{
		std::cout << now.first << " " << now.second << std::endl;
	}

	return 0;
}