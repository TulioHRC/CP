#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll maxi = 1e9 + 10;
	int t; std::cin >> t;
	ll n, k;

	std::vector<std::vector<ll>> tower(50);
	tower[0] = {1, 0};

	for (ll i = 1; (1 << (i-1)) < maxi; i++) {
		tower[i] = {1};
		for (ll j = 1; (1 << (j-1)) < maxi; j++) {
			if (j > i) tower[i].push_back(0);
			else tower[i].push_back(tower[i-1][j-1] + tower[i-1][j]);
		}
	}

	while(t--) {
		std::cin >> n >> k;

		ll res = 0;
		ll i = 1, j = 1; // i is the max_bit, j is the number of set bits
		while ((1 << (i-1)) <= n) { // O(30)
			//std::cout << "[i] reading " << i << "\n";
			j = 1;
			while ((1 << (j-1)) < maxi) { // O(30)
				//std::cout << "[j] reading " << j << "\n";
				if (j > i || (1 << (i-1) == n && j > 1)) break;

				//std::cout << "tower val - " << tower[i-1][j-1] << "\n";

				if (j + i > (k+1)) {
					res += tower[i-1][j-1];
				}
				j++;
			}
			i++;
		}

		std::cout << res << "\n";
	}

	return 0;
}
