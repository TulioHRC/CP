#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a, b, c; std::cin >> a >> b >> c;

	double delta = b * b - (4 * a * c);

	if(delta < 0 || a == 0) {
		std::cout << "Impossivel calcular" << std::endl;
		return 0;
	}

	double r1 = (-1 * b + std::sqrt(delta)) / (2 * a); 
	double r2 = (-1 * b - std::sqrt(delta)) / (2 * a); 

	std::cout << std::fixed;
	std::cout.precision(5);

	std::cout << "R1 = " << r1 << std::endl;
	std::cout << "R2 = " << r2 << std::endl;

	return 0;
}
