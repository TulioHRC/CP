#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll res;

	while (t--) {
		int k, x; std::cin >> k >> x;
		res = x << k;
		std::cout << res << "\n";
	}

	return 0;
}
