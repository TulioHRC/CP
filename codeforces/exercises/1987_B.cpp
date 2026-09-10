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
std::vector<ll> a(1e6);

void solve() {
	std::cin >> n;

	for (int i = 0; i < n; i++) std::cin >> a[i];

	ll biggest_diff = 0;
	ll res = 0;

	for (int i = 1; i < n; i++) {
		ll diff = a[i-1] - a[i];

		if (diff > 0) {
			a[i] = a[i-1];
			res += diff;
			biggest_diff = biggest_diff > diff ? biggest_diff : diff;
		}
	}

	res += biggest_diff;

	std::cout << res << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
