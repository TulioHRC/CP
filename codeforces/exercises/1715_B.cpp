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

ll n, k, b, ss;
std::vector<ll> res(2e5);

void solve() {
	std::cin >> n >> k >> b >> ss;

	bool can = true;
	ll actual_sum = 0;

	if ((ss / k) < b) can = false;
	else {
		res[n - 1] = std::min(ss, ((b + 1) * k - 1));
		actual_sum += res[n-1];

		for (int i = n - 2; i >= 0; i--) {
			if (actual_sum < ss) {
				res[i] = std::min(ss - actual_sum, k - 1);
				actual_sum += res[i];
			} else {
				res[i] = 0;
			}
		}
		if (actual_sum < ss) {
			can = false;
		}
	}

	if (can == false) {
		std::cout << -1 << "\n";
	} else {
		for (int i = 0; i < n; i++) {
			std::cout << res[i] << " ";
		}
		std::cout << "\n";
	}
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
