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
ll min, max;
std::vector<ll> a(3e5);
std::vector<ll> min_l(3e5);
std::vector<ll> max_r(3e5);

void solve() {
	std::cin >> n;

	ll min = -1;
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];

		if (a[i] < min || min == -1) min = a[i];

		min_l[i] = min;
	}

	ll max = -1;
	for (int i = (n - 1); i >= 0; i--) {
		if (a[i] > max) max = a[i];

		max_r[i] = max;
	}

	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) std::cout << 1;
		else if (a[i] == min_l[i] || a[i] == max_r[i]) std::cout << 1;
		else std::cout << 0;
	}

	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
