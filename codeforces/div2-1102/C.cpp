#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int n, i, j, lastPos;
std::vector<ll> h(3001);
ll actual, last;

void solve() {
	std::cin >> n;

	for (i = 0; i < n; i++) {
		std::cin >> h[i];
	}

	for (i = 0; i < n; i++) {
		actual = 0;
		last = -1;

		// First right
		j = (i + 1) == n ? 0 : i + 1;
		while (j != i) {
			if (last == -1) {
				last = std::min({h[j], h[i]});
			} else if (h[lastPos] > last && h[j] > h[lastPos]) {
				last = h[lastPos];
			} else {
				break;
			}

			actual += last;
			std::cout << "r" << last << " ";

			lastPos = j;
			j++;
			if (j == n) j = 0;
		}
		std::cout << "\n";

		// Second left
		j = (i - 1) == -1 ? n - 1 : i - 1;
		last = -1;
		while (j != lastPos) {
			if (last == -1) {
				last = h[j];
			} else {
				last = (last > h[j]) ? last : h[j];
			}

			actual += last;
			std::cout << "l" << last << " ";

			j--;
			if (j == -1) j = n - 1;
		}
		std::cout << "\n";


		//std::cout << actual << " ";
	}
	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
