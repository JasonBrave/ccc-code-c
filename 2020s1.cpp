#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>

int main() {
	unsigned long n;
	std::vector<std::pair<unsigned long, long>> v;
	std::cin >> n;
	for (unsigned long i = 0; i < n; i++) {
		unsigned long t;
		long p;
		std::cin >> t >> p;
		v.push_back(std::make_pair(t, p));
	}

	std::sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
		return a.first < b.first;
	});

	double max_v = 0;
	for (unsigned long i = 0; i < n - 1; i++) {
		double velocity
			= std::abs(((double)v[i + 1].second - v[i].second) / (v[i + 1].first - v[i].first));
		max_v = (velocity > max_v) ? velocity : max_v;
	}
	std::cout << std::fixed << max_v << std::endl;
}
