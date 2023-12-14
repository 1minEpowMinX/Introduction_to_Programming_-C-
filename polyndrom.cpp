#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s = "";
	getline(std::cin, s);
	std::cout << (s == std::string(s.rbegin(), s.rend()) ? "yes" : "no");
	return 0;
}