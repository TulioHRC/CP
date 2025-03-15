#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float a, b, c; std::cin >> a >> b >> c;

	std::cout.precision(1);
	std::cout << std::fixed;

	if(a + b > c && a + c > b && b + c > a) {
		std::cout << "Perimetro = " << a + b + c << std::endl;
	} else {
		std::cout << "Area = " << (a + b) * c / 2 << std::endl;
	}

	return 0;
}
