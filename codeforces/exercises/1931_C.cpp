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

ll n;
std::vector<ll> a(3e5);

void solve() {
	std::cin >> n;

	for (ll i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	if (n == 1) {
		std::cout << 0 << "\n";
		return; 
	}

	ll left_count = 0;
	ll right_count = 0;

	ll l = 0;
	ll r = n - 1;

	while (l < r && a[l] == a[0]) {
		left_count++;
		l++;
	}

	while (r >= l && a[r] == a[n-1]) {
		right_count++;
		r--;
	}

	ll quant = a[0] == a[n-1] ? left_count + right_count : std::max(left_count, right_count);

	std::cout << (n - quant) << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
