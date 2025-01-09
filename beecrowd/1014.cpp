#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int km; std::cin >> km;
	double l; std::cin >> l;

	std::cout << std::fixed;
	std::cout.precision(3);
	std::cout << km / l << " km/l" << std::endl;

	return 0;
}
