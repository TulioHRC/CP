#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		std::vector<int> res;
		res.reserve(3 * n);

		int small = 1;
		int actual = 3 * n;
		while(actual > small) {
			res.push_back(actual);
			res.push_back(actual - 1);
			res.push_back(small);
			small++;
			actual -= 2;
		}

		for (int i : res) std::cout << i << " ";
		std::cout << "\n";
	}

	return 0;
}
