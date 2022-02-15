#include <algorithm>
#include <cfloat>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
	unsigned long n;
	std::vector<long> v;
	std::cin >> n;
	for (unsigned long i = 0; i < n; i++) {
		long t;
		std::cin >> t;
		v.push_back(t);
	}
	std::sort(v.begin(), v.end(), [](int a, int b) {
		return a < b;
	});

	double min_dst = DBL_MAX;
	for (unsigned long i = 1; i < n - 1; i++) {
		double dst = ((double)v[i + 1] - v[i - 1]) / 2;
		min_dst = (dst < min_dst) ? dst : min_dst;
	}
	std::cout << std::fixed << std::setprecision(1) << min_dst << std::endl;
}
