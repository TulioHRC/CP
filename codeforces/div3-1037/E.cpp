#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n;

	ll aux;

	while(t--) {
		std::cin >> n;

		bool res = true;

		std::vector<ll> p;
		p.reserve(n);
		std::vector<ll> ss;
		ss.reserve(n);

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			p.push_back(aux);
		}

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			ss.push_back(aux);
		}

		// validate if all p and ss is divisible by p[n-1]
		for (int i = 0; i < n; i++) {
			if (p[i] % p[n - 1] != 0 || ss[i] % p[n - 1] != 0) {res = false; break;} 
		}

		if (res == true) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}

	return 0;
}
