#include <iostream>
#include <string>

int main()
{
	std::string s = "", max = "";
	while (!std::cin.eof())
	{
		std::cin >> s;
		if (s.length() > max.length())
		{
			max = s;
		}
	}
	std::cout << max;
	return 0;
}