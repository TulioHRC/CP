#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, aux; std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			std::cout << (n + 1 - aux) << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
