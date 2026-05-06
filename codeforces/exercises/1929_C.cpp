#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		ll k, x, a; std::cin >> k >> x >> a;

		ll need = 1;
		for (ll i = 0; i < x; i++) {

			ll nova = need / (k - 1);
			nova++;
			need += nova;
			if (need > a) break;

			//std::cout << "Loss " << i + 1 << " - " << nova << " - need: " << need << "\n";
		}

		//std::cout << need << "\n";
		if (need > a) {
			std::cout << "NO\n";
		} else {
			std::cout << "YES\n";
		}
	}

	return 0;
}
