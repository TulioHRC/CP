#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	
	while(t--){
		int n; std::cin >> n;

		if (n % 2 > 0) std::cout << 0 << "\n";
		else {
			int div = n / 4;

			std::cout << (div + 1) << "\n";
		}
	}

	return 0;
}
