#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<int> nletter;
	nletter.resize(26, 0);
	std::string s, ss;
	std::cin >> s >> ss;
	int asterisk = 0;
	for (char tt : ss) {
		if (tt == '*') {
			asterisk++;
		} else {
			nletter[tt - 'a']++;
		}
	}
	for (char t : s) {
		if (nletter[t - 'a'] > 0) {
			nletter[t - 'a']--;
		} else {
			asterisk--;
		}
	}
	for (int t : nletter) {
		if (t < 0 || asterisk < 0) {
			std::cout << 'N' << std::endl;
			return 0;
		}
	}
	std::cout << 'A' << std::endl;
}
