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

ll x;

void solve() {
	std::cin >> x;

	bool found = false;
	for (int i = (x - 1); i > 0; i--) {
		if (x + i > (x ^ i) && (x ^ i) + x > i && (x ^ i) + i > x) {
			std::cout << i << "\n";
			found = true;
			break;
		}
	}

	if (!found) std::cout << -1 << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
