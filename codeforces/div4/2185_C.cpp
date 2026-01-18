#include <algorithm>
#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		std::vector<ll> vec;
		vec.reserve(n);

		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			vec.push_back(aux);
		}

		std::sort(vec.begin(), vec.end());

		int maxInterval = 1;

		int actualInterval = 1;
		int actual = vec[0];
		for (int i = 1; i < n; i++) {
			if (vec[i] == (actual + 1)) {
				actualInterval++;
			} else if (vec[i] != actual) {
				actualInterval = 1;
			}

			actual = vec[i];

			if (actualInterval > maxInterval) maxInterval = actualInterval;
		}
		std::cout << maxInterval << "\n";
	}

	return 0;
}
