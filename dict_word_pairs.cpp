#include <iostream>
#include <map>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::map<std::string, std::string> dict;
	for (int i = 0; i < n; ++i)
	{
		std::string key, value;
		std::cin >> value >> key;
		dict[key] = value;
		dict[value] = key;
	}
	std::string s = "";
	std::cin >> s;
	std::cout << dict[s] << std::endl;
	return 0;
}