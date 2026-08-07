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

ll n, k;

void solve() {
	std::cin >> n >> k;

	if (n == k) { std::cout << "Bob\n"; return; }
	
	while (k > n) {
		k = k / 2;
		if () {std::cout << "Bob\n"; return;};
	}

	std::cout << "Alice" << "\n";
}

int main() { _
	ll t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
