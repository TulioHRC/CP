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
ll k;
std::vector<ll> a(3e5);
std::vector<ll> b(3e5);

void solve() {
	std::cin >> n >> k;

	ll min_a = -1;
	ll max_a = -1;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		if (a[i] < min_a || min_a == -1) min_a = a[i];
		if (a[i] > max_a) max_a = a[i];
	}

	ll sum = -1;
	bool can = true;
	for (int i = 0; i < n; i++) {
		std::cin >> b[i];
		if (b[i] != -1) {
			if (sum != -1 && a[i] + b[i] != sum) can = false;
			sum = a[i] + b[i];
		}
	}

	if (can) {
		if (sum != -1) {
			// has a specific sum value
			// validate if it is possible for each pos in a
			for (int i = 0; i < n; i++) {
				if (b[i] == -1 && (sum - a[i] > k || sum - a[i] < 0)) {
					can = false;
				}
			}
			std::cout << (can ? 1 : 0) << "\n";
		} else {
			// can be any sum value
			ll tot = k - (max_a - min_a) + 1;
			std::cout << (tot >= 0 ? tot : 0) << "\n";
		}
	} else {
		std::cout << 0 << "\n";
	}
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
