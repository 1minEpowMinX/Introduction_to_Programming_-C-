#include <iostream>
#include <set>
#include <algorithm>

int main()
{
	int num;
	std::cin >> num;
	std::set<int> n;
	std::set<int> m;
	std::set<int> intersection;
	for (int el, i = 0; i < num && std::cin >> el; i++)
	{
		n.insert(el);
	}
	std::cin >> num;
	for (int el, i = 0; i < num && std::cin >> el; i++)
	{
		m.insert(el);
	}
	std::set_intersection(n.begin(), n.end(),
						  m.begin(), m.end(),
						  std::inserter(intersection, intersection.begin()));
	for (auto const el : intersection)
	{
		std::cout << el << " ";
	}
	return 0;
}