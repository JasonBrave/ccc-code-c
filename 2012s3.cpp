#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using pint = std::pair<int, int>; // value, freq

constexpr int iabs(int n) {
	return n >= 0 ? n : -n;
}

int main() {
	unsigned long n;
	std::cin >> n;
	std::vector<pint> v;
	v.reserve(1000);
	for (int i = 0; i < 1000; i++) {
		v.push_back(std::make_pair(i + 1, 0));
	}
	for (unsigned long i = 0; i < n; i++) {
		unsigned int t;
		std::cin >> t;
		v[t - 1].second++;
	}
	std::vector<pint> vc = v;
	std::sort(v.begin(), v.end(), [](pint a, pint b) {
		if (a.second != b.second) {
			return a.second > b.second;
		} else {
			return a.first > b.first; // hi to lo
		}
	});
	std::sort(vc.begin(), vc.end(), [](pint a, pint b) {
		if (a.second != b.second) {
			return a.second > b.second;
		} else {
			return a.first < b.first; // lo to hi
		}
	});
	if (v[0].second == v[1].second) {
		std::cout << iabs(v[0].first - vc[0].first) << std::endl;
	} else {
		int large_diff;
		if (iabs(v[0].first - v[1].first) > iabs(v[0].first - vc[1].first)) {
			large_diff = iabs(v[0].first - v[1].first);
		} else {
			large_diff = iabs(v[0].first - vc[1].first);
		}
		std::cout << large_diff << std::endl;
	}
}
