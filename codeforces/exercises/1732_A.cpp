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
std::vector<ll> v(20);

void solve() {
	std::cin >> n;

	ll gcd_all = -1;
	for (int i = 0; i < n; i++) {
		std::cin >> v[i];
		if (gcd_all == -1) gcd_all = v[i];

		gcd_all = std::gcd(gcd_all, v[i]);
	}

	ll gcd_tmp = gcd_all;
	int tmp_cost = 0;

	if (gcd_all == 1) {
		std::cout << 0 << "\n";
	} else {
		for (int i = (n - 1); i >= 0; i--) {
			//std::cout << "looking in " << i << ": " << std::gcd(i + 1, gcd_all) << "...\n";
			if (std::gcd(i+1, gcd_all) == 1) {
				std::cout << (n - i) << "\n";
				break;
			} else if (std::gcd(i+1, gcd_tmp) < gcd_tmp) {
				gcd_tmp = std::gcd(i+1, gcd_tmp);
				tmp_cost += n - i;
				if (gcd_tmp == 1) {
					std::cout << tmp_cost << "\n";
					break;
				}
			}
		}
	}

}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
