#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;

	ll hero_sum = 0;
	std::vector<ll> heroes;
	heroes.reserve(n);

	ll aux;
	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		hero_sum += aux;
		heroes.push_back(aux);
	}

	std::sort(heroes.begin(), heroes.end());

	int m; std::cin >> m;

	std::vector<std::pair<ll, ll>> dragons; // def - atk
	dragons.reserve(m);
	
	ll aux2;
	for (int i = 0; i < m; i++) {
		std::cin >> aux >> aux2;
		dragons.push_back({aux, aux2});
	}

	ll coins;
	int l, r, mid;
	// binary search O(m.log n)
	for (auto dragon : dragons) {
		coins = 0;

		l = 0;
		r = n - 1;

		while (l < r) {
			mid = (l + r) / 2;

			if (dragon.f > heroes[mid]) {
				l = mid + 1;
			} else {
				r = mid;
			}

			//std::cout << l << " - " << r << "\n";
		}

		//std::cout << "found binary search - " << r << "\n";

		// math comparation
		if (heroes[r] < dragon.f) {
			coins += dragon.f - heroes[r]; // to attack
			coins += dragon.s > (hero_sum - heroes[r]) ? dragon.s - (hero_sum - heroes[r]) : 0; // to defend
		} else {
			// case1 uses heroes[r]
			ll case1 = 0; // to attack
			case1 += dragon.s > (hero_sum - heroes[r]) ? dragon.s - (hero_sum - heroes[r]) : 0; // to defend
			// case2 uses before heroes[r]
			ll case2 = -1;
			if (r > 0) {
				case2++;
				case2 += dragon.f - heroes[r-1]; // to attack
				case2 += dragon.s > (hero_sum - heroes[r-1]) ? dragon.s - (hero_sum - heroes[r-1]) : 0; // to defend
			}

			coins += (case2 != -1 && case2 < case1) ? case2 : case1;
		}

		std::cout << coins << "\n";
	}

	return 0;
}
