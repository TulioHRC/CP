#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while (t--) {
		int n; std::cin >> n;
		int inv1 = -1; int inv2 = -1;

		int res1, res2;

		int aux;
		std::vector<int> one;
		one.reserve(n);
		std::cin >> res1;
		one.push_back(res1);
		for (int i = 1; i < n; i++) {
			std::cin >> aux;
			one.push_back(aux);
			res1 = res1 ^ aux;
		}

		std::cin >> res2;
		if (one[0] != res2) inv1 = 0;
		for(int i = 1; i < n; i++) {
			std::cin >> aux;
			res2 = res2 ^ aux;

			if (one[i] != aux) {
				if (i % 2) inv2 = i;
				else inv1 = i;
			}
		}
		
		if (res1 == res2) std::cout << "Tie\n";
		else if (inv1 > inv2) std::cout << "Ajisai\n";
		else if (inv2 > inv1) std::cout << "Mai\n";
		else if (res1 > res2) std::cout << "Ajisai\n";
		else std::cout << "Mai\n";
	}	

	return 0;
}
