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

ll rocks, max;

ll lost_point(ll maxPoint) {
	return maxPoint % 2 ? maxPoint / 2 : maxPoint / 2 - 1;
}

void solve() {
	std::cin >> rocks >> max;

	bool Alice_lost = false;

	ll actual_lost_cond = max;

	while (actual_lost_cond > 0 && Alice_lost == false) {
		if (rocks == actual_lost_cond) {
			Alice_lost = true;
		}

		actual_lost_cond = lost_point(actual_lost_cond);
	}

	std::cout << (Alice_lost ? "Bob" : "Alice") << "\n";
}

int main() { _
	ll t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
