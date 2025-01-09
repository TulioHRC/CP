#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a, b, c, d; std::cin >> a >> b >> c >> d;

	std::cout << std::fixed;
	std::cout.precision(4);
	std::cout << sqrt((a - c) * (a - c) + (b - d) * (b -d)) << std::endl;

	return 0;
}
