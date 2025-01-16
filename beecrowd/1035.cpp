#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b, c, d; std::cin >> a >> b >> c >> d;

	bool is_valid = (b > c) && (d > a) && ((c + d) > (a + b)) && (c >= 0) && (d >= 0) && (a % 2 == 0);

	if(is_valid) std::cout << "Valores aceitos" << std::endl;
	else std::cout << "Valores nao aceitos" << std::endl;

	return 0;
}
