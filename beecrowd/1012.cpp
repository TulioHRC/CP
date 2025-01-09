#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a, b, c; std::cin >> a >> b >> c;
	
	std::cout << std::fixed;
	std::cout.precision(3);
	std::cout << "TRIANGULO: " << a * c / 2 << std::endl;
	std::cout << "CIRCULO: " << 3.14159 * c * c << std::endl;
	std::cout << "TRAPEZIO: " << (a + b) * c / 2 << std::endl;
	std::cout << "QUADRADO: " << b * b << std::endl;
	std::cout << "RETANGULO: " << a * b << std::endl;

	return 0;
}
