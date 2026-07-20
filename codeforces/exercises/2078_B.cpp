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

void solve() {
	std::cin >> n >> k;

	if (k % 2 != 0) {
		for (int i = 1; i < n; i++) {
			std::cout << n << " ";
		}
		std::cout << n-1 << "\n";
	} else {
		for (int i = 2; i < n; i++) {
			std::cout << (n - 1) << " ";
		}
		std::cout << n << " " << (n - 1) << "\n";
	}
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
