#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int popcount(int z) {
	int count = 0;

	while (z > 0) {
		if (z % 2) count++;
		z /= 2;
	}

	return count;
}

std::vector<int> used(1 << 16, -1);

int main() { _
	int t; std::cin >> t;

	for(int test = 0; test < t; test++) {
		int n; std::cin >> n;
		
		int actualOp = 15;
		
		int total = 1 << n;

		for (int i = 0; i < total; i++) {
			std::pair<int, int> biggest = {-1, -1}; // num, popcount
			for (int j = 0; j < total; j++) {
				if (used[j] == test) continue;
				int jPopcount = popcount(j & actualOp);
				if (jPopcount > biggest.s) {
					biggest = {j, jPopcount};
				}
			}
			actualOp = actualOp & biggest.f;
			used[biggest.f] = test;
			std::cout << biggest.f << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
