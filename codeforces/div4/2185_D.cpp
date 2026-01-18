#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> vec(3 * 1e5);
	std::vector<std::pair<ll, int>> newVec(3 * 1e5); // val, last_crash

	while(t--) {
		ll n, m, h; std::cin >> n >> m >> h;

		for (int i = 0; i < n; i++) {
			std::cin >> vec[i];
			newVec[i] = { vec[i], -1 };
		}

		ll b, c;
		int last_crash = -1;
		for (int i = 0; i < m; i++) {
			std::cin >> b >> c;

			if (newVec[b-1].s != last_crash) {
				newVec[b-1] = {vec[b-1], last_crash};
			}
			if (newVec[b-1].f + c > h) {
				last_crash = i;
				newVec[b-1] = {vec[b-1], last_crash};
			} else {
				newVec[b-1].f = newVec[b-1].f + c;
			}

			// std::cout << i << " - " << newVec[b-1].f << " " << newVec[b-1].s << "\n";
		}

		for (int i = 0; i < n; i++) {
			if (newVec[i].s != last_crash) {
				std::cout << vec[i] << " ";
			} else {
				std::cout << newVec[i].f << " ";
			}
		}
		std::cout << "\n";
	}

	return 0;
}
