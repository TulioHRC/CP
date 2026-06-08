#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int n;
std::vector<ll> h(4e3), starting_from_i(4e3), right_maxes(4e3), left_maxes(4e3);

void solve() {
	std::cin >> n;

	for (int i = 0; i < n; i++) std::cin >> h[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) starting_from_i[j] = h[(i + j)%n];

		right_maxes[0] = starting_from_i[0];
		for (int j = 1; j < n; j++) right_maxes[j] = std::max(right_maxes[j - 1], starting_from_i[j]);

		left_maxes[n] = 0;
		for (int j = n - 1; j > 0; j--) left_maxes[j] = std::max(left_maxes[j + 1], starting_from_i[j]);

		ll res = 0;
		for (int j = 0; j < n; j++) {
			res += std::min(right_maxes[j], left_maxes[j + 1]);
		}

		std::cout << res << " ";
	}
	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
