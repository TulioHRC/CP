#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	while(t--) {
		ll n, k; std::cin >> n >> k;

		ll l = n, r = n;
		int count = 0;
		while(r != 1) {
			if (l <= k && r >= k) break;
			count++;
			l = l / 2;
			r = r / 2 + r % 2; // biggest possibility
		}

		if (l <= k && r >= k) std::cout << count << "\n";
		else std::cout << -1 << "\n";
	}
	return 0;
}
