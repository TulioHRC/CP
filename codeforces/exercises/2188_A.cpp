#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n;
	while(t--) {
		std::cin >> n;
		
		std::vector<int> res;
		res.reserve(n);

		int big = n;
		int small = 1;
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				res.push_back(big);
				big--;	
			}
			else {
				res.push_back(small);
				small++;
			}
		}

		for (int i = n; i > 0; i--) {
			std::cout << res[i-1] << " ";
		}


		std::cout << "\n";
	}

	return 0;
}
