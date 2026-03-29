#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> a(6e4);
	std::vector<ll> b(6e4);

	while(t--) {
		int n; std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			std::cin >> b[i];
		}

		int res = 0;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				ll gcd_after = std::gcd(a[i], a[i + 1]); 
				if (gcd_after != a[i] && gcd_after <= b[i]) {
					res++;
				}
			} else if (i == (n - 1)) {
				ll gcd_before = std::gcd(a[i], a[i - 1]);
				if (gcd_before != a[i] && gcd_before <= b[i]) {
					res++;
				}
			} else {
				ll gcd_after = std::gcd(a[i], a[i + 1]); 
				ll gcd_before = std::gcd(a[i], a[i - 1]);
				ll bigger_gcd = std::max(gcd_after, gcd_before);
				ll smaller_gcd = std::min(gcd_after, gcd_before);

				if (std::gcd(bigger_gcd, smaller_gcd) == smaller_gcd && bigger_gcd != a[i] && bigger_gcd <= b[i]) {
					res++;
				}
			}
		}

		std::cout << res << "\n";
	}

	return 0;
}
