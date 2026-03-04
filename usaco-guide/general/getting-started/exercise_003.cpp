#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b; std::cin >> a >> b;
	int x, y; std::cin >> x >> y;

	int minn = x > y ? y : x;
	int maxx = x > y ? x : y;

	int distance_to_min = std::abs(a - minn);

	if (distance_to_min + std::abs(b - maxx) < std::abs(b - a)) {
		std::cout << distance_to_min + std::abs(b - maxx) << "\n";
	} else {
		std::cout << std::abs(b - a) << "\n";
	}

	return 0;
}
