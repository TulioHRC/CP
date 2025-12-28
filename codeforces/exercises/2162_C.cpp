#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll a, b, x, aAux, bAux;
	int total;

	std::vector<ll> res;
	res.reserve(100);
	for (int i = 0; i < 100; i++) res.push_back(0);

	while(t--) {
		total = 0;

		std::cin >> a >> b;

		aAux = a;
		bAux = b;
		x = 0;

		ll aux = 1;

		while (true) {
			//std::cout << aAux << " " << bAux << " " << aux << " " << x << std::endl;
			if ((aAux % 2) != (bAux % 2)) {
				if (x + aux > a) {
					//std::cout << total << " - " << a << std::endl;
					a = x ^ a;
					res[total] = x;
					x = 0;
					total++;
				}
				x += aux;
				if (x > a) {
					total = -1;
					x = 0;
					break;
				}
			}
			//std::cout << "oi" << std::endl;
			aAux = aAux >> 1;
			bAux = bAux >> 1;
			aux = aux << 1;

			if (aAux == 0 && bAux == 0) break;
		}

		if (x > 0) {
			res[total] = x;
			total++;
		}

		std::cout << total << "\n";
		for (int i = 0; i < total; i++) {
			std::cout << res[i] << " ";
		}
		if (total > 0) std::cout << "\n";
	}

	return 0;
}
