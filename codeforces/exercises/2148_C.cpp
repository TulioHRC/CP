#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		ll n, m; std::cin >> n >> m;

		ll min = 0;
		int side = 0;
		ll points = 0;
		ll auxMin;
		int auxSide;
		for (int i = 0; i < n; i++) {
			std::cin >> auxMin >> auxSide;
			
			ll diff = auxMin - min;
			//std::cout << side << " - " << auxSide << " - " << diff << "\n";
			if (auxSide == side) {
				points += diff % 2 ? diff - 1 : diff;
			} else {
				points += 1 + ((diff - 1) % 2 ? diff - 2 : diff - 1);
			}
			//std::cout << "Points: " << points << "\n";

			min = auxMin;
			side = auxSide;
		}

		//std::cout << points << " " << min << " " << side;

		if (min < m) points += m - min;

		std::cout << points << "\n";
	}

	return 0;
}
