#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<ll> banks(3e5);

	while(t--) {
		int n;
		ll x, y; std::cin >> n >> x >> y;
	
		ll sum = 0; // This will contain only the transferable value

		for (int i = 0; i < n; i++) {
			std::cin >> banks[i];

			sum += (banks[i] / x) * y;
		}

		ll sumMax = 0;

		for (int i = 0; i < n; i++) {
			ll sumHere = sum - (banks[i] / x) * y + banks[i];
			sumMax = sumMax < sumHere ? sumHere : sumMax;
		}

		std::cout << sumMax << "\n";
	}

	return 0;
}
