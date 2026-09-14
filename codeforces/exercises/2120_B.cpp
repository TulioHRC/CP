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

int n;
ll side;
ll dx, dy, x, y;

void solve() {
	std::cin >> n >> side;

	int res = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> dx >> dy >> x >> y;

		if (side % 2 == 0 && x == side/2 && x == y) {
			res++;
			continue;
		}

		if (x == y && (dx == dy)) {
			res++;
			continue;
		}

		if ((side - x == y || side - y == x) && dx != dy) {
			res++;
			continue;
		}
	}

	std::cout << res << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
