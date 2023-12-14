#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int tmp, i = 0; i < n && std::cin >> tmp; ++i)
	{
		nums[i] = tmp;
	}
	std::sort(nums.begin(), nums.end());
	for (auto now : nums)
	{
		std::cout << now << " ";
	}
	return 0;
}