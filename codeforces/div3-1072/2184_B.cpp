#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int s, k, m; std::cin >> s >> k >> m;
		int res;

		if (k >= s) {
			int aux = m % k;
			
			if (aux == 0) res = s;
			else res = aux >= s ? 0 : s - aux;
		} else {
			int flips = m / k;

			res = (flips % 2 == 0) ? s - (m - (k * flips)) : k - (m - (k * flips));
		}

		std::cout << res << "\n";
	}

	return 0;
}
