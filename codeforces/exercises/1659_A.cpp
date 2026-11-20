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

int n, r, b;

void solve() {
	std::cin >> n >> r >> b;

	int max_rep = r / (b + 1);

	if (r % (b + 1)) max_rep++;

	std::string res = "";
	res.reserve(n);

	for (int i = 0; i < (b + 1); i++) {
		int to_be_put = max_rep;

		// put less
		if (r - to_be_put < (b + 1 - i)) {
			to_be_put = r - (b + 1 - i) + 1;
		}

		for (int j = 0; j < to_be_put; j++) {
			res.push_back('R');
			r--;
		}

		if (i != b) res.push_back('B');
	}

	std::cout << res << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
