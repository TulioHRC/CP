#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll a, b;

	const ll MAX = 5e6 + 10;

	std::vector<ll> smallest_prime_factor(MAX, 1);

	for (ll i = 2; i < MAX; i++) {
		if (smallest_prime_factor[i] == 1) {
			for (ll j = i; j < MAX; j += i) {
				if (smallest_prime_factor[j] == 1) {
					smallest_prime_factor[j] = i;
				}
			}
		}
	}

	std::vector<ll> factors(MAX);
	std::vector<ll> prefix_sum(MAX);

	factors[1] = 0;
	prefix_sum[1] = 0;
	for (ll i = 2; i < (MAX); i++) {
		factors[i] = 1 + factors[i / smallest_prime_factor[i]];
		prefix_sum[i] = factors[i] + prefix_sum[i-1];
	}

	while(t--) {
		std::cin >> a >> b;

		std::cout << (prefix_sum[a] - prefix_sum[b]) << "\n";	
	}

	return 0;
}
