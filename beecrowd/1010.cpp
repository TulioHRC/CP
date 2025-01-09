#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b, d, e; std::cin >> a >> b;
	double c, f; std::cin >> c >> d >> e >> f;

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << "VALOR A PAGAR: R$ " << b * c + e * f << std::endl;

	return 0;
}
