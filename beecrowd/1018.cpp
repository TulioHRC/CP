#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll val; std::cin >> val;

	int n = 0;
	
	std::cout << val << std::endl;

	n += val / 100;
	int a = val / 100;
	val = val % 100;

	n += val / 50;
	int b = val/50;
	val = val % 50;

	n += val / 20;
	int c = val/20;
        val = val % 20;

	n += val / 10;
	int d = val / 10;
        val = val % 10;

	n += val / 5;
	int e = val / 5;
        val = val % 5;

	n += val / 2;
	int f = val / 2;
        val = val % 2;

	n += val / 1;
	int g = val / 1;
        
	std::cout << a << " nota(s) de R$ 100,00" << std::endl;
	std::cout << b << " nota(s) de R$ 50,00" << std::endl;
	std::cout << c << " nota(s) de R$ 20,00" << std::endl;
	std::cout << d << " nota(s) de R$ 10,00" << std::endl;
	std::cout << e << " nota(s) de R$ 5,00" << std::endl;
	std::cout << f << " nota(s) de R$ 2,00" << std::endl;
	std::cout << g << " nota(s) de R$ 1,00" << std::endl;


	return 0;
}
