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

ll x, y;

void solve() {
	y = -1;
	std::cin >> x;

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			if (i == j) continue;

			// at least 1 bit set equal && at least 1 bit set diff
			if (((1 << i) & x) > 0 && ((1 << j) & x) == 0) {
				ll val = (1 << i) + (1 << j);
				if (val >= x) continue; 
				y = (val < y || y == -1) ? val : y;
			} 
		}
	}

	std::cout << y << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
