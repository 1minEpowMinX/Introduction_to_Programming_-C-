#include <iostream>
#include <set>
#include <algorithm>

// Громоздская версия на set_intersection
/*int main()
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
	std::set_intersection(n.begin(), n.end(), m.begin(), m.end(), std::inserter(intersection, intersection.begin()));
	std::cout << intersection.size() << std::endl;
	return 0;
}*/

// Версия на разнице множеств
int main()
{
	int num;
	std::cin >> num;
	std::set<int> n;
	std::multiset<int> m;
	for (int el, i = 0; i < num && std::cin >> el; i++)
	{
		n.insert(el);
		m.insert(el);
	}
	std::cin >> num;
	for (int el, i = 0; i < num && std::cin >> el; i++)
	{
		n.insert(el);
		m.insert(el);
	}
	std::cout << m.size() - n.size() << std::endl;
}