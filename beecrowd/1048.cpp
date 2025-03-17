#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float a; std::cin >> a;

	std::cout.precision(2);
	std::cout << std::fixed;

	float newA;
	float increase;

	if (a <= 400) increase = 15;
	else if (a <= 800) increase = 12;
	else if (a <= 1200) increase = 10;
	else if (a <= 2000) increase = 7;
	else increase = 4;

	newA = a * (1 + increase / 100.0);

	std::cout << "Novo salario: " << newA << std::endl;
	std::cout << "Reajuste ganho: " << newA - a << std::endl;
	std::cout << "Em percentual: " << (int)(increase) << " %" << std::endl;

	return 0;
}
