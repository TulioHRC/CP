#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, k;
	ll actual, seconds, aux;
	
	while (t--) {
		std::cin >> n >> k;
		std::set<ll> towers;

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			towers.insert(aux);

			if (i == k - 1) actual = aux;
		}
		seconds = 0;	
		
		bool found = false;
		for (ll tower : towers) {
			if (tower > actual) {
				if (tower - actual + seconds > actual) {
					std::cout << "NO\n";
					found = true;
					break;
				}
				seconds += tower - actual;
				actual = tower;
			}
		}

		if (found == false) {
			std::cout << "YES\n";
		} 
	}

	return 0;
}
