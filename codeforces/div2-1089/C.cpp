#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> a(3e5);
	std::vector<ll> b(3e5);

	while(t--) {
		int n; std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			std::cin >> b[i];
		}

		int res = 0;

		ll gcd_after, gcd_before, bigger_gcd, smaller_gcd;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				gcd_after = std::gcd(a[i], a[i + 1]);  	
				if (gcd_after != a[i] && gcd_after <= b[i]) {
					res++;
				}
			} else if (i == (n - 1)) {
				gcd_before = std::gcd(a[i], a[i - 1]);
				if (gcd_before != a[i] && gcd_before <= b[i]) {
					res++;
				}
			} else {
				gcd_after = std::gcd(a[i], a[i + 1]); 
				gcd_before = std::gcd(a[i], a[i - 1]);
				ll lcm = std::lcm(gcd_before, gcd_after);

				if (lcm != a[i] && lcm <= b[i]) {
					res++;
				}
			}
		}

		std::cout << res << "\n";
	}

	return 0;
}
