#include <algorithm>
#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		std::vector<int> nums;
		nums.reserve(n);
		std::vector<int> numsCopy;
		numsCopy.reserve(n);

		std::pair<int, int> biggest = {-1, -1}; // num, index
		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			nums.push_back(aux);
			numsCopy.push_back(aux);
		}

		std::sort(numsCopy.begin(), numsCopy.end());
		std::reverse(numsCopy.begin(), numsCopy.end());

		int pos = -1;
		for (int i = 0; i < n; i++) {
			if (nums[i] != numsCopy[i]) {
				pos = i;
				for (int j = 0; j < n; j++) {
					if (nums[j] == numsCopy[i]) biggest = {nums[j], j};
				}
				break;
			} else {
				std::cout << nums[i] << " ";
			}
		}

		if (pos != -1) {
			for (int i = biggest.s; i >= pos; i--) {
				std::cout << nums[i] << " ";
			}
			for (int i = biggest.s + 1; i < n; i++) {
				std::cout << nums[i] << " ";
			}
		}
		std::cout << "\n";
	}

	return 0;
}
