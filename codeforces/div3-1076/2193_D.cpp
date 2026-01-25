#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	
	while(t--) {
		int n; std::cin >> n;
		
		std::vector<ll> swords;
		swords.reserve(n);

		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			swords.push_back(aux);
		}

		std::sort(swords.begin(), swords.end());
		
		ll bestScore = 0;
		ll minimumSword;
		ll sum = 0;
		
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			sum += aux;

			//std::cout << "[" << i << "]" << " sum = " << sum << "\n";

			if (sum > n) continue;
			minimumSword = swords[n-sum];
			//std::cout << "[" << i << "]" << " minimumSword * (i + 1) = " << minimumSword * (i + 1) << "\n";
			if (minimumSword * (i + 1) > bestScore) bestScore = minimumSword * (i + 1);
		}

		std::cout << bestScore << "\n";
	}

	return 0;
}
