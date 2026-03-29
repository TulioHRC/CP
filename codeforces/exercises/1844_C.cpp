#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		std::vector<ll> charges;
		charges.reserve(n);

		for (int i = 0; i < n; i++) {
			charges.push_back(0);
			std::cin >> charges[i];
		}

		ll even_sum = 0;
		ll odd_sum = 0;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0 && charges[i] > 0) {
				even_sum += charges[i];
			} else if (i % 2 == 1 && charges[i] > 0) {
				odd_sum += charges[i];
			}
		}

		ll res;
		if (even_sum == 0 && odd_sum == 0) {
			res = *std::max_element(charges.begin(), charges.end());
		} else {
			res = std::max(even_sum, odd_sum);
		}

		std::cout << res << "\n";
	}

	return 0;
}
