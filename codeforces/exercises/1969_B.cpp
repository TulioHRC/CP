#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::string aux;
	while(t--) {
		std::cin >> aux;
		ll minCost = 0;
		ll countOne = 0;
		for (char i : aux) {
			if (i == '1') countOne++;
			else if (countOne > 0) {
				minCost += countOne + 1;
			}
		}

		std::cout << minCost << "\n";
	}

	return 0;
}
