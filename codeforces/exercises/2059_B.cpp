#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, k; std::cin >> n >> k;
		
		std::vector<ll> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		
		ll res = 0;
		if (n == k) {
			// case 1: n = k (actual order)

			for (int i = 1; i < n; i += 2) {
				if (a[i] == res + 1) res++;
				else break;
			}

		} else {
			// case 2: k < n
			
			int can_group = n - k;
			int need_group = 0;

			for (int i = 1; i < n; i++) {
				if (a[i] != 1) break;
				else need_group++;
			}

			if (need_group > can_group) res++; 

		}
		std::cout << res + 1 << "\n";
	}

	return 0;
}
