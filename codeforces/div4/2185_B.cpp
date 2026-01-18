#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		int max = 0;
		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			if (aux > max) max = aux;
		}

		std::cout << (n * max) << "\n";
	}

	return 0;
}
