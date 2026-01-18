#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		ll n, k; std::cin >> n >> k;

		ll res = -1;

		bool is_n_odd;
		ll count = 0;
		if (n == k) res = 0;
		while (n > 1) {
			if (n == k) {
				res = count;
				break;
			}
			is_n_odd = n % 2 == 1 ? true : false;

			n = n >> 1;
			count++;

			if (is_n_odd) {
				if (n == k || (n+1) == k) {
					res = count;
					break;
				}
			} else {
				if (n == k) {
					res = count;
					break;
				}
			}
		}

		std::cout << res << "\n";
	}

	return 0;
}
