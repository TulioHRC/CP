#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll n, c, k; std::cin >> n >> c >> k;

	std::vector<ll> v;
	v.reserve(n);

	ll aux;
	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		v.push_back(aux);
	}

	std::sort(v.begin(), v.end());

	ll buses = 0;
	ll qtd = 1;
	ll min_queue = v[0];
	for (int i = 1; i < n; i++) {
		if (c == qtd || min_queue + k < v[i]) {
			buses++;
			min_queue = v[i];
			qtd = 1;
		} else {
			qtd++;
		}
	}

	if (qtd > 0) buses++;

	std::cout << buses << "\n";

	return 0;
}
