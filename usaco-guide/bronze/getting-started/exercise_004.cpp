#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	int n, m; std::cin >> n >> m;

	int res = 0;

	std::vector<std::pair<int, int>> segments; // (end_point, limit)
	segments.reserve(n);

	int aux1, aux2;
	int act = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> aux1 >> aux2;
		
		segments.push_back({aux1 + act, aux2});
		act += aux1;
	}

	int actual_segment = 0;
	int actual_len = 0;
	for (int i = 0; i < m; i++) {
		std::cin >> aux1 >> aux2;

		while(true) {
			int diff = aux2 - segments[actual_segment].s;
			res = diff > res ? diff : res;

			// passes segment
			if (aux1 + actual_len > segments[actual_segment].f) {
				actual_segment++;
			} else if (aux1 + actual_len == segments[actual_segment].f) {
				actual_segment++;
				break;
			} else {
				break;
			}
		}

		actual_len += aux1;
	}

	std::cout << res << "\n";

	return 0;
}
