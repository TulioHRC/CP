#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n;

	while (t--) {
		std::cin >> n;
		
		if (n == 2) std::cout << "-1 2\n";
		else {
			for (int i = 0; i < n; i++) {
				if (i % 2 == 0) {
					std::cout << -1 << " ";
				} else {
					std::cout << 3 << " ";
				}
			}
			std::cout << "\n";
		}
	}

	return 0;
}
