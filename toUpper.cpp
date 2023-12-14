#include <iostream>
#include <string>

int main()
{
	std::string s = "";
	getline(std::cin, s);
	for (auto c : s)
	{
		if (c >= 'a' && c <= 'z')
		{
			std::cout << char('A' + (c - 'a'));
		}
		else
		{
			std::cout << c;
		}
	}
	return 0;
}