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
std::vector<ll> a(3e5);

void solve() {
	std::cin >> n;

	int res = 0;
	ll last = -1;

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
		
		if (res == 0) { 
			res++;
			last = a[i];
		}
		else if (a[i] > (last + 1)) {
			res++;
			last = a[i];
		}
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
