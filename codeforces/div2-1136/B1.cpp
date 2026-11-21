#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

template <typename T>
void debug_func(T var, std::string var_name) {
	std::cout << var_name << ": " << var << std::endl;
}

#define debug(x) debug_func(x, #x)

#define f first
#define s second

typedef long long ll;

int x, y, m;

void solve() {
	std::cin >> x >> y >> m;

	std::string s;
	std::cin >> s;

	int best = x + y;

	for (int i = 0; i < m; i++) {
		if (s[i] == '-') {
			if (y > 1 || x == 0) {
				y--;
				x++;
			} else if (x > 0) {
				x--;
			} else {
				break;
			}
		} else {
			if (y > 0) {
				y++;
			} else if (x > 0) {
				x--;
				y++;
			} else {
				break;
			}
		}

		//std::cout << "op " << i << " - x " << x << " - y " << y << "\n";

		best = best > (x + y) ? best : x + y;
	}

	std::cout << best << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
