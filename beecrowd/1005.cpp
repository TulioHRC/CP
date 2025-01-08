#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a, b; std::cin >> a >> b;

	std::cout << std::fixed;
	std::cout.precision(5);

	std::cout << "MEDIA = " << (a*3.5 + b*7.5) / 11 << " " << std::endl;

	return 0;
}
