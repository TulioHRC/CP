#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while (t--) {
		int n, k; std::cin >> n >> k;
		std::vector<int> blocks;
		blocks.reserve(n);
		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			blocks.push_back(aux);
		}

		if (blocks[0] == blocks[n-1]) {
			// Same colors
			int count = 2;
			for (int i = 1; i < (n-1); i++){
				if (blocks[i] == blocks[0]) count++;
			}

			if (count >= k) std::cout << "YES\n";
			else std::cout << "NO\n";
		} else {
			// Diff colors
			int first_block_count = 1;
			int first_block_last_pos = -1;
			for (int i = 1; i < n; i++){
				if (first_block_count == k) {
					first_block_last_pos = i-1;
					break;
				}
				if (blocks[0] == blocks[i]) first_block_count++;
			}

			int second_block_count = 1;
			int second_block_first_pos = -1;
			for (int i = (n - 2); i >= 0; i--) {
				if (second_block_count == k) {
					second_block_first_pos = i + 1;
					break;
				}
				if (blocks[n-1] == blocks[i]) second_block_count++;
			}

			if (first_block_last_pos != -1 && second_block_first_pos != -1 && first_block_last_pos < second_block_first_pos) std::cout << "YES\n";
			else std::cout << "NO\n";
		}
	}

	return 0;
}
