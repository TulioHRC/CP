#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b;

	std::cin >> a >> b;

	if(a >= b) b += 24;

	std::cout << "O JOGO DUROU " << b - a << " HORA(S)" << std::endl;

	return 0;
}
