#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> a(6e4);
	std::vector<ll> b(6e4);
	std::vector<ll> primes = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73};
	std::vector<ll> c(6e4);
	int P = (int)primes.size();
	std::vector<std::vector<int>> dp(6e4, std::vector<int>(P, -1));
	
	
	while(t--) {
		int n; std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			std::cin >> b[i];
		}

		ll gcd_after, gcd_before;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				gcd_after = std::gcd(a[i], a[i + 1]);
				c[i] = gcd_after;
			} else if (i == (n - 1)) {
				gcd_before = std::gcd(a[i], a[i - 1]);
				c[i] = gcd_before;
			} else {
				gcd_after = std::gcd(a[i], a[i + 1]); 
				gcd_before = std::gcd(a[i], a[i - 1]);

				c[i] = std::lcm(gcd_before, gcd_after);
			}
		}

		// first dp row
		{
			for (int i = 0; i < P; i++) {
				ll val = c[0] * primes[i];

				if (i == 0) {
					dp[0][0] = c[0] == a[0] || c[0] > b[0] ? 0 : 1;
				}
				else if (val != a[0] && val <= b[0] && std::gcd(val, c[1]) == std::gcd(a[0], a[1])) {
					dp[0][i] = 1;
				} else {
					dp[0][i] = 0;
				}
			}
		}

		for (int i = 1; i < n; i++) {
			for (int j = 0; j < P; j++) {
				dp[i][j] = -1;
				for (int k = 0; k < P; k++) {
					// Special case (no change needs to be quantified)
					if (j == 0) {
						if (c[i] == a[i] || c[i] > b[i]) dp[i][j] = std::max(dp[i][j], dp[i-1][k]); // best previous scenario
						else dp[i][j] = std::max(dp[i][j], dp[i-1][k] + 1);
						continue;
					}

					ll actual_val = c[i] * primes[j];
					ll previous_val = c[i-1] * primes[k];
					
					if (actual_val <= b[i] && std::gcd(previous_val, actual_val) == std::gcd(a[i], a[i-1]) && actual_val != a[i]) {
						if (i < n - 1) {
							if (std::gcd(actual_val, c[i + 1]) != std::gcd(a[i], a[i + 1])) dp[i][j] = -1; // mid scenario needs to mantain front gcd
						}
						dp[i][j] = std::max(dp[i][j], dp[i-1][k] + 1);
					}
				}
			}
		}

		int res = 0;

		for (int i = 0; i < P; i++) res = res > dp[n - 1][i] ? res : dp[n - 1][i];

		std::cout << res << "\n";
	}

	return 0;
}
