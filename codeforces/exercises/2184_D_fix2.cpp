#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll maxi = 1e3 + 10;
	int t; std::cin >> t;
	ll n, k;

	std::map<ll, ll> num_ks;

	num_ks[1] = 1;

	for (ll i = 2; i < maxi; i++) {
		num_ks[i] = i % 2 == 0 ? num_ks[i / 2] + 1 : num_ks[i - 1] + 1;
	}

	std::map<ll, std::map<ll, ll>> n_map_per_count;

	n_map_per_count[1] = {};
	n_map_per_count[1][1] = 1;

	ll a = 2;

	while (a < maxi) {
		n_map_per_count[a] = n_map_per_count[a >> 1];

		for (ll num = a; num > (a >> 1); num--) {
			if (n_map_per_count[a].find(num_ks[num]) != n_map_per_count[a].end()) {
				n_map_per_count[a][num_ks[num]]++;
			} else {
				n_map_per_count[a][num_ks[num]] = 1;
			}
		}

		a = a << 1;
	}

	std::cout << "==== n_map_per_count ====\n";

	for (const auto &outer : n_map_per_count) {
		std::cout << "Key (a): " << outer.first << "\n";

		for (const auto &inner : outer.second) {
			std::cout << "  count_k: " << inner.first 
					<< " -> occurrences: " << inner.second << "\n";
		}

		std::cout << "------------------------\n";
	}

	while(t--) {
		std::cin >> n >> k;
	}

	return 0;
}
