#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	int m, n, k; std::cin >> m >> n >> k;


	std::string aux;
	for (int i = 0; i < m; i++) {
		std::cin >> aux;

		for (int z = 0; z < k; z++) {
			for (char c : aux) {
				for (int j = 0; j < k; j++)
					std::cout << c;
			}
			std::cout << "\n";
		}
	}

	return 0;
}
