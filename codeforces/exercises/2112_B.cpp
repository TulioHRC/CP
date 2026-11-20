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

void solve() {
	std::cin >> n;

	std::vector<int> a(n);

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	int res = -1;

	if (n == 2) {
		if (std::abs(a[0] - a[1]) <= 1) {
			std::cout << 0 << "\n";
		} else {
			std::cout << -1 << "\n";
		}
		return;
	}

	for (int i = 1; i < (n - 1); i++) {
		if (std::abs(a[i - 1] - a[i]) <= 1 || std::abs(a[i + 1] - a[i]) <= 1) {
			res = 0;
			break;
		}

		if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
			res = 1;
		}

		if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
			res = 1;
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
