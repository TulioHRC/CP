#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, x;
	while (t--) {
		std::cin >> n >> x;
		for (int i = 0; i < n; i++) {
			if (i == x) continue;
			
			std::cout << i << ' ';
		}
		if (x < n)
			std::cout << x << '\n';
		else std::cout << '\n';
	}

	return 0;
}
