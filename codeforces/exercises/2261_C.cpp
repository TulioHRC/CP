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

ll n, odd, aux;

void solve() {
	std::cin >> n;

	odd = 0;

	for (ll i = 0; i < n; i++) {
		std::cin >> aux;

		if (aux % 2 != 0) odd++;
	}

	if (odd % 2 == 0 || n == 1) std::cout << "Moggity\n";
	else if (odd == 1 && n == 2) std::cout << "Larpity\n";
	else if (odd == 3 && n == 3) std::cout << "Larpity\n";
	else std::cout << "Moggity\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
