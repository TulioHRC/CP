#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> products(3e5, 0);
	std::vector<int> discounts(3e5, 0);

	while(t--) {
		int n, k; std::cin >> n >> k;

		for (int i = 0; i < n; i++) {
			std::cin >> products[i];
		}

		for (int i = 0; i < k; i++) {
			std::cin >> discounts[i];
		}

		std::sort(products.begin(), products.begin() + n);
		std::reverse(products.begin(), products.begin() + n);
		std::sort(discounts.begin(), discounts.begin() + k);

		int actual = 0;
		ll cost = 0;
		for (int j = 0; j < k; j++) {
			int group = discounts[j];
			for (int i = 0; i < group && actual < n; i++) {
				if (i != group - 1) cost += products[actual];
				actual++;	
			}
			if (actual == n) break;
		}

		for (; actual < n; actual++) cost += products[actual];

		std::cout << cost << "\n";
	}

	return 0;
}
