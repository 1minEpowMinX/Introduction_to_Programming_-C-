#include <iostream>
#include <set>

int main()
{
	int foot = 0, pairs_n = 0, cnt = 0;
	std::cin >> foot >> pairs_n;
	if (!pairs_n)
	{
		std::cout << 0;
	}
	else
	{
		std::set<int> pairs;
		for (int size = 0, i = 0; i < pairs_n && std::cin >> size; i++)
		{
			pairs.insert(size);
		}
		for (auto &pair : pairs)
		{
			if (pair >= foot)
			{
				++cnt;
				foot = pair + 3;
			}
		}
		std::cout << cnt;
	}
	return 0;
}