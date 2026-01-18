#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

ll limit(ll n, ll k) {
	ll aux = 1;
	k--;

	while (aux <= n && k > 0) {
		k--;
		aux = aux << 1;
	}

	return aux;
}


int main() { _
	int t; std::cin >> t;

	while(t--) {
		ll n, k; std::cin >> n >> k;

		ll l = limit(n, k);

		if (l >= n) std::cout << 0 << "\n";
		else {
			std::cout << (n - l) << "\n";
		}
	}

	return 0;
}
