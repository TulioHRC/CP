#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> magazine(3e5);
	std::vector<ll> max_suffix(3e5); // after i position

	while(t--) {
		int n;
		ll h, k; std::cin >> n >> h >> k;

		ll totalSum = 0;

		for (int i = 0; i < n; i++) {
			std::cin >> magazine[i];
			totalSum += magazine[i];
		}

		ll seconds = (h / totalSum) * n + (h / totalSum) * k; // Initial reloads needed
		h -= (h / totalSum) * totalSum; // rest of life

		ll rawSum = 0;
		ll smallestSoFar = magazine[0];
		if (h > 0) {
			ll actualMax = 0;
			for (int i = n - 1; i >= 0; i--) {
				max_suffix[i] = actualMax;
				actualMax = magazine[i] > actualMax ? magazine[i] : actualMax;
			}

			for (int i = 0; i < n; i++) {
				rawSum += magazine[i];

				if (magazine[i] < smallestSoFar) {
					smallestSoFar = magazine[i];
				}

				ll add = max_suffix[i] > smallestSoFar ? max_suffix[i] - smallestSoFar : 0;
				//std::cout << i << " -> " << max_suffix[i] << " - " << add << " - " << smallestSoFar << "\n";

				if (rawSum + add >= h) {
					seconds += i + 1;
					break;
				} 
			}
		} else {
			seconds -= k;
		}

		std::cout << seconds << '\n';
	}

	return 0;
}
