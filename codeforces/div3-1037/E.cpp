#include <bits/stdc++.h>
#include <numeric>

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

		for (int i = 0; i < n; i++) {
			ll ans_i = std::lcm(p[i], ss[i]);

			// Primeiro sempre será igual ao p[0]
			if (i == 0 && ans_i != p[0]) {res = false; break;}
			// Ultimo sempre será igual ao p[n-1]
			if (i == n-1 && ans_i != ss[n-1]) {res = false; break;}
			// 72 - 24 - 03 - 03 - 03 - 03
			// 03 - 03 - 03 - 06 - 12 - 144

			// 72 - 24 - 3 - 6 - 12 - 144

			// ans_i = ai
			// gcd (a1, a2, a3, ..., ai) == p[i], gcd(a1, a2, a3, ..., ai-1) = p[i-1] => gcd(p[i-1], ai) = p[i]
			if (i > 0 && std::gcd(p[i-1], ans_i) != p[i]) {res = false; break;}
			
			// gcd (ai, ai+1, ... an) = ss[i], gcd(ai+1, ai+2, ..., an) = ss[i+1] => gcd(ss[i+1], ai) = ss[i]
			if (i < n-1 && std::gcd(ss[i+1], ans_i) != ss[i]) {res = false; break;}
		}

		if (res == true) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}

	return 0;
}
