#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	int x, y; std::cin >> x >> y;

	int actual = 0;
	int shift = 0;
	while (true) {
		int change = 1 << shift;
		actual += change;

		if (shift % 2 == 0) {
			if (y > x && y <= x + change) {
				actual -= (x + change - y);
				std::cout << actual << "\n";
				break;
			}

			//if (x + change > 1000) {
			//	actual -= (x + change - 1000);
			//}
		} else {
			if (y < x && y >= x - change) {
				actual -= (y - (x - change));
				std::cout << actual << "\n";
				break;
			}
		}

		shift++;
		actual += change;
	}

	return 0;
}
