#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int m,n,p,q;
	while(t--) {
		std::cin >> n >> m >> p >> q;

		if (n % p != 0) std::cout << "YES\n";
		else {
			std::cout << ((n/p * q == m) ? "YES" : "NO") << "\n";
		}
	}

	return 0;
}
