#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a; std::cin >> a;

	if(a < 0) std::cout << "Fora de intervalo" << std::endl;
	else if (a <= 25) std::cout << "Intervalo [0,25]" << std::endl;
	else if (a <= 50) std::cout << "Intervalo (25,50]" << std::endl;
	else if (a <= 75) std::cout << "Intervalo (50,75]" << std::endl;
	else if (a <= 100) std::cout << "Intervalo (75,100]" << std::endl;
	else std::cout << "Fora de intervalo" << std::endl;

	return 0;
}
