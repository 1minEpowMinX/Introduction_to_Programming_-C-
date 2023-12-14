#include <iostream>
#include <set>

int main()
{
	int n;
	std::cin >> n;
	std::set<int> numbers;
	for (int el, i = 0; i < n && std::cin >> el; i++)
	{
		std::cout << (numbers.insert(el).second ? "NO" : "YES") << std::endl;
	}
	return 0;
}