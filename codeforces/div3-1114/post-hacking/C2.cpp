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
	std::string a, b;

	void solve() {
		std::cin >> n >> a >> b;

		std::pair<int,int> odd_ones = {0, 0}; // odd ones in a, odd ones in b
		std::pair<int,int> even_ones = {0, 0}; // even ones in a, even ones in b

		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				if (a[i] == '1') even_ones.f++;
				if (b[i] == '1') even_ones.s++;
			} else {
				if (a[i] == '1') odd_ones.f++;
				if (b[i] == '1') odd_ones.s++;
			}
		}

		if (even_ones.f != even_ones.s || odd_ones.f != odd_ones.s) {
			std::cout << -1 << "\n";
			return;
		}

		ll moves = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] == b[i]) continue;

			ll actual_moves = 1;
			while (a[i] == a[i + 2 * actual_moves]) actual_moves++;

			moves += actual_moves;

			char aux = a[i];
			a[i] = a[i + 2 * actual_moves];
			a[i + 2 * actual_moves] = aux;
		}

		std::cout << moves << "\n";
	}

	int main() { _
		int t; std::cin >> t;

		while(t--) {
			solve();
		}

		return 0;
	}
