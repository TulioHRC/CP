#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int h, km; std::cin >> h >> km;

	std::cout << std::fixed;
	std::cout.precision(3);
	std::cout << (double)(h * km) / 12.0 << std::endl;

	return 0;
}
