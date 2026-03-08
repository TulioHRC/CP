#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n;
	ll k, max, l, r, real;

	while(t--) {
		std::cin >> n >> k;
	
		max = k;

		std::vector<std::pair<ll, std::pair<ll, ll>>> cassinos; // real, [l, r]
		cassinos.reserve(n);

		for (int i = 0; i < n; i++) {
			std::cin >> l >> r >> real;
			if (real > k) {
				cassinos.push_back({real, {l, r}});
			}
		}

		struct
		{
			bool operator()(std::pair<ll, std::pair<ll, ll>> a, std::pair<ll, std::pair<ll, ll>> b) const { return a.f < b.f; }
		}
		customComp;

		std::sort(cassinos.begin(), cassinos.end(), customComp);

		for (auto cassino : cassinos) {
			if (cassino.s.f <= max && cassino.s.s >= max) {
				max = cassino.f;
			}
		}

		std::cout << max << "\n";
	}

	return 0;
}
