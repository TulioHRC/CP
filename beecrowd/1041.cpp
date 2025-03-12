#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float a, b; std::cin >> a >> b;

	if (a > 0 && b > 0) std::cout << "Q1" << std::endl;
	else if (a > 0 && b < 0) std::cout << "Q4" << std::endl;
	else if (a < 0 && b > 0) std::cout << "Q2" << std::endl;
	else if (a < 0 && b < 0) std::cout << "Q3" << std::endl;
	else if (a == 0 && b == 0) std::cout << "Origem" << std::endl;
	else if (b == 0) std::cout << "Eixo X" << std::endl;
	else std::cout << "Eixo Y" << std::endl;

	return 0;
}
