#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		int y, r; std::cin >> y >> r;

		int total = r + y / 2;

		std::cout << std::min(total, n) << "\n";	
	}

	return 0;
}
