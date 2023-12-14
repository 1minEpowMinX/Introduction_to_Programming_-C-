#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
	int n = 0, cnt = 0;
	std::cin >> n >> std::ws;
	std::map<std::string, std::vector<std::string>> dict;
	for (int i = 0; i < n; ++i)
	{
		std::string s = "";
		std::getline(std::cin, s);
		for (int j = 0; j < s.length(); ++j)
		{
			int trigger = s.find('-');
			std::string key = "", value = "";
			if (j < trigger && s[j] != ' ')
			{
				key += s[j];
			}
			else if (j > trigger && s[j] != ' ' && s[j] != ',')
			{
				value += s[j];
			}
			std::cout << value << "-" << key;
			if (j > trigger && s[j] == ' ')
			{
				dict[key].push_back(value);
				value = "";
			}
			std::cout << "\n";
		}
		return 0;
	}
}