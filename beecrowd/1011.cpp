#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int r; std::cin >> r;

	std::cout << std::fixed;
	std::cout.precision(3);
	double a = 4.0/3.0 ;
	std::cout << "VOLUME = " << a * r * r * r * 3.14159 << std::endl;

	return 0;
}
