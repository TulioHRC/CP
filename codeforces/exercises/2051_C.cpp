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

ll n, m, k;

std::vector<int> knows(4e5, -1);
std::vector<ll> lists(4e5);

void solve(int t) {
	std::cin >> n >> m >> k;

	for (ll i = 0; i < m; i++) {
		std::cin >> lists[i];
	}

	ll aux;
	for (ll i = 0; i < k; i++) {
		std::cin >> aux;
		knows[aux] = t;
	}

	for (ll i = 0; i < m; i++) {
		if (k < (n - 1) || (k == (n - 1) && knows[lists[i]] == t)) std::cout << 0;
		else std::cout << 1;
	}
	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve(t);
	}

	return 0;
}
