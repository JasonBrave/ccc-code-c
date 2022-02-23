#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int way = 0;
	for (int i = 0; i <= n / 2; i++) {
		if (i > 5 || n - i > 5) {
			continue;
		}
		way++;
	}
	std::cout << way << std::endl;
}
