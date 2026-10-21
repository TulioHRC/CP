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

ll n, xa, ya, xb, yb;

void solve() {
	std::cin >> n >> xa >> ya >> xb >> yb;

	ll actualLayer = std::min({n - xa + 1, n - ya + 1, xa, ya});
	ll goalLayer = std::min({n - xb + 1, n - yb + 1, xb, yb});

	//std::cout << actualLayer << " " << goalLayer;

	std::cout << std::abs(actualLayer - goalLayer) << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
