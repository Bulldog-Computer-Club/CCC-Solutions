#include <iostream>
#include <vector>
#include <numeric>

int main() {
	long p;
	int n;
	int r;

	std::cin >> p;
	std::cin >> n;
	std::cin >> r;

	int day = 0;
	std::vector<int> x;
	x.push_back(n);

	while (std::accumulate(x.begin(), x.end(), 0) <= p) {
		day++;
		x.push_back(x[day - 1] * r);
	}

	std::cout << day << std::endl;
}
