#include <iostream>
#include <string>
#include <regex>

int main()
{
	std::string ip_adress = "";
	std::regex ip_regex("^(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
	std::cin >> ip_adress;
	std::cout << (std::regex_match(ip_adress, ip_regex) ? "YES" : "NO") << std::endl;
}
/*int main()
{
	std::string s = "", res = "";
	bool ans = true;
	int dot_cnt = 0, n = s.length();
	getline(std::cin, s);
	for (int i = 0; i < n; ++i)
	{
		if (s[n - 1] == '.')
		{
			ans = false;
		}
		if (s[i] == '.' && s[i + 1] != '.')
		{
			++dot_cnt;
			if (256 > std::stoi(res) < 0)
			{
				ans = false;
			}
			res = "";
		}
		else
		{
			ans = false;
			break;
		}
		if (s[i] <= '9' && s[i] >= '0')
		{
			res += s[i];
		}
	}
	std::cout << (ans && dot_cnt == 3 ? "YES" : "NO");
	return 0;
}*/