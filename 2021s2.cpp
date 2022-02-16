#include <iostream>
#include <set>
#include <utility>
#include <vector>

int main() {
	unsigned long m, n, k;
	std::cin >> m >> n >> k;
	std::set<std::pair<unsigned long, unsigned long>> map;
	for (unsigned long i = 0; i < k; i++) {
		char op;
		std::cin >> op;
		if (op == 'R') {
			unsigned long row;
			std::cin >> row;
			for (unsigned long j = 0; j < m; j++) {
				if (map.contains(std::make_pair(j, row))) {
					map.erase(std::make_pair(j, row));
				} else {
					map.insert(std::make_pair(j, row));
				}
			}
		} else if (op == 'C') {
			unsigned long column;
			std::cin >> column;
			for (unsigned long j = 0; j < m; j++) {
				if (map.contains(std::make_pair(column, j))) {
					map.erase(std::make_pair(column, j));
				} else {
					map.insert(std::make_pair(column, j));
				}
			}
		}
	}
	std::cout << map.size() << std::endl;
}
