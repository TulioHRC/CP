#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b, c, d; std::cin >> a >> b >> c >> d;

	if (a >= c) c += (a == c && b < d) ? 0 : 24;

	if (b > d) {
		c -= 1;
		d += 60;
	}

	std::cout << "O JOGO DUROU " << c - a << " HORA(S) E " << d - b << " MINUTO(S)" << std::endl;

	return 0;
}
