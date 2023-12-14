#include <iostream>
#include <string>

int main()
{
	std::string s = "";
	int cnt = 1;
	getline(std::cin, s);
	for (auto c : s)
	{
		cnt += c == ' ' ? 1 : 0;
	}
	std::cout << cnt;
	return 0;
}