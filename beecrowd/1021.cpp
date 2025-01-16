#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	long double a; std::cin >> a;
	ll b = a * 100;

	std::vector<int> notes = {10000, 5000, 2000, 1000, 500, 200};
	std::vector<int> coins = {100, 50, 25, 10, 5, 1};

	std::cout << std::fixed;
	std::cout.precision(0);

	std::cout << "NOTAS:" << std::endl;

	for(int i : notes) {
		int c = b / i;
		b -= c * i;
		std::cout << c << " nota(s) de R$ " << i / 100 << ".00" << std::endl; 
	}

	std::cout << "MOEDAS:" << std::endl;

	for(long double i : coins) {
		int c = b / i;
		//std::cout << a / i << std::endl;
		//std::cout << i << " " << c << " " << a << std::endl;
		b -= c * i;
		std::cout.precision(2);
		std::cout << c << " moeda(s) de R$ " << i / 100 << std::endl;
	}

	//std::cout << a << std::endl;

	return 0;
}
