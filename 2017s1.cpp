#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main() {
	unsigned int n;
	std::cin >> n;
	std::vector<unsigned int> va, vb;
	va.reserve(100000);
	vb.reserve(100000);
	for (unsigned int i = 0; i < n; i++) {
		unsigned int t;
		std::cin >> t;
		va.push_back(t);
	}
	for (unsigned int i = 0; i < n; i++) {
		unsigned int t;
		std::cin >> t;
		vb.push_back(t);
	}
	unsigned int sa = 0, sb = 0, day = 0;
	for (unsigned int i = 0; i < n; i++) {
		sa += va[i];
		sb += vb[i];
		if (sa == sb) {
			day = i + 1;
		}
	}
	std::cout << day << std::endl;
}
