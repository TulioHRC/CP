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

ll op(ll o) {
	ll newO = 0;

	while(o > 0) {
		ll a = o % 10;
		newO += a * a;
		o = o / 10;
	}

	return newO;
}

void solve() {
	std::cin >> n;

	// For each num we'll calculate its last iteration in 200 iterations, cause if two numbers will be equal for two lighthouses
	// 200 was chosen because the biggest number possible 999.999.999 goes 729 in one
	// 699 (biggest double sum) goes 198
	// 99 (biggest third iteration double sum) goes 162
	// SO 200, is the guaranteed option to not worry about not having any cycles
	
	std::vector<ll> a(200, 0);

	for (int i = 0; i < n; i++) {
		ll val; std::cin >> val;

		for (int j = 0; j < 200; j++) {
			val = op(val);
		}

		a[val]++;
	}

	int tunes = 0;

	for (int i = 0; i < 200; i++) {
		tunes += a[i] * (a[i] - 1) / 2;
	}

	std::cout << tunes << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
