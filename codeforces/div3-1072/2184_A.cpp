#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		int res;

		if (n == 2 || n == 3) res = n;
		else if (n % 2 == 0) res = 0;
		else res = 1;

		std::cout << res << "\n";
	}

	return 0;
}
