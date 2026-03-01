#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll n;

	while(t--) {
		std::cin >> n;

		ll up = 10;
		std::vector<ll> res;

		while (up < n) {
			if (n % (up + 1) == 0) {
				ll x = n / (up + 1);
				if (x > 0)
					res.push_back(x);
			}

			up = up * 10;
		}

		std::sort(res.begin(), res.end());

		std::cout << res.size() << "\n";

		if (res.size() > 0) {
			for (ll a : res) {
				std::cout << a << " ";
			}
			std::cout << "\n";
		}
	}

	return 0;
}
