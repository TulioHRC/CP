#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		std::map <int, int> count;

		int aux;
		for (int i = 0; i < (2 * n); i++) {
			std::cin >> aux;
			count[aux] = count.find(aux) != count.end() ? count[aux] + 1: 1;
		}

		int odd_cnt = 0;
		int even_cnt = 0;

		for (auto it = count.begin(); it != count.end(); ++it) {
			if (it->second % 2 == 1) odd_cnt++;
			else even_cnt++;
		}

		int res = (odd_cnt >= 1 || (even_cnt % 2 == n % 2)) ? 2 * even_cnt + odd_cnt : 2 * (even_cnt - 1) + odd_cnt;

		std::cout << res << "\n";
	}

	return 0;
}
