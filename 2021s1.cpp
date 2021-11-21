#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
	std::cout.sync_with_stdio(false);
	unsigned int n;
	std::cin >> n;
	std::vector<unsigned int> height, width;
	height.reserve(10001);
	width.reserve(10000);
	for (unsigned int i = 0; i < n + 1; i++) {
		unsigned int t;
		std::cin >> t;
		height.push_back(t);
	}
	for (unsigned int i = 0; i < n; i++) {
		unsigned int t;
		std::cin >> t;
		width.push_back(t);
	}
	double area = 0;
	for (unsigned int i = 0; i < n; i++) {
		area += (height[i] + height[i + 1]) * width[i] / (double)2;
	}
	std::cout << std::setprecision(1) << std::fixed << area << std::endl;
}
