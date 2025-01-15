#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;
	int ano = n / 365;
	n = n % 365;
	int mes = n / 30;
	n = n % 30;
	int dias = n;

	std::cout << ano << " ano(s)" << std::endl;
	std::cout << mes << " mes(es)" << std::endl;
	std::cout << dias << " dia(s)" << std::endl;

	return 0;
}
