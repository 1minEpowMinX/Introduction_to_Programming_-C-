#include <iostream>

int main()
{
	char s;
	std::cin >> s;
	std::cout << ('9' >= s && s >= '0' ? "yes" : "no");
	return 0;
}