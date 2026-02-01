#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll n, x;

	ll a, b, c;

	while(t--) {
		std::cin >> n >> x;

		ll best[3] = {0, 0, 0};
		ll prePoints = 0;

		for (int i = 0; i < n; i++) {
			std::cin >> a >> b >> c;

			if (b > 1) {
				prePoints += a * (b - 1);
			}
			if ((best[0] * best[1] - best[2]) < (a * b - c)) {
				best[0] = a; best[1] = b; best[2] = c;
			}
		}

		//std::cout << prePoints << " PRE POINTS \n";
		//std::cout << best[0] << " - " << best[1] << " - " << best[2] << "\n";

		ll needed = x - prePoints;
		ll res = 0;
		if (needed > 0) {
			ll bestChange = (best[0] * best[1] - best[2]);
			res = bestChange <= 0 ? -1 : needed / bestChange;

			if (res != -1 && needed % bestChange) res++;
		}
		std::cout << res << "\n";
	}

	return 0;
}
