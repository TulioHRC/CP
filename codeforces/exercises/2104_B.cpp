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
std::vector<std::pair<ll, int>>v(3e5); // val, pos
std::vector<ll> vi(3e5);
ll aux;

void solve() {
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		v[i] = {aux, i};
		vi[i] = aux;
	}

	struct
	{
		bool operator()(std::pair<ll, int> a, std::pair<ll, int> b) const { return a.f > b.f; }
	} op;
	std::sort(v.begin(), v.begin() + n, op);

	int actualPair = 0;
	ll actual = 0;

	for (int k = 1; k <= n; k++) {
		while(v[actualPair].s > (n - k)) actualPair++;
		std::cout << (actual + v[actualPair].f) << " ";
		actual += vi[n - k];
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
