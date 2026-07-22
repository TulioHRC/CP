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
	std::cin >> x >> y;

	int res = 0;

	for (int i = 0; i < 30; i++) {
		ll val = 1 << i;
		if ((x & val) == (y & val)) res++;
		else break;
	}

	std::cout << (1ll << res) << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
