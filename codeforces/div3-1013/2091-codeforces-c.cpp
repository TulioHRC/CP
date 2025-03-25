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

		if (n%2 == 0) std::cout << -1 << "\n";
		else if (n > 1) {
			// std::vector<int> list;
			//list.reserve(n);
			//list.push_back(1);
			std::cout << 1 << " ";
			for(int i = n; i > 2; i--){
				//list.push_back(i);
				std::cout << i << " ";
			}

			std::cout << 2 << "\n";
		} else {
			std::cout << 1 << "\n";
		}
	}

	return 0;
}
