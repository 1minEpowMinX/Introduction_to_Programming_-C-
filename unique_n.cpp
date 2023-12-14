#include <iostream>
#include <set>

int main()
{
	int n;
	std::cin >> n;
	std::set<int> numbers;
	for (int i = 0; i < n; i++)
	{
		int el;
		std::cin >> el;
		numbers.insert(el);
	}
	std::cout << numbers.size();
}