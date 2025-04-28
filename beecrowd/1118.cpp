#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a, b;
	int newCalc = 1;

	while (newCalc == 1) {
		std::cin >> a;
		while (a > 10 || a < 0) {
			std::cout << "nota invalida" << std::endl;
			std::cin >> a;
		}
		std::cin >> b;
		while (b > 10 || b < 0) {
			std::cout << "nota invalida" << std::endl;
			std::cin >> b;
		} 

		std::cout << std::fixed;
		std::cout.precision(2);
		std::cout << "media = " << (a + b) / 2 << std::endl;

		newCalc = 0;
		while (newCalc < 1 || newCalc > 2) {
			std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
			std::cin >> newCalc;
		}
	}

	return 0;
}
