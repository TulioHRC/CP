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

int m, n;
std::vector<ll> prods(3e5);
std::vector<ll> posts(3e5);

void solve() {
	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		std::cin >> prods[i];
	}

	for (int i = 0; i < m; i++) {
		std::cin >> posts[i];
	}

	// sort it
	std::sort(posts.begin(), posts.begin() + m);

	ll productivity = 0;
	ll actualSum = 0;
	int actualPost = 0;

	for (int i = 1; i <= n; i++) {
		if (actualPost >= m || i <= posts[actualPost]) {
			actualSum += prods[i - 1];
		} else {
			productivity += std::abs(actualSum);
			actualPost++;
			actualSum = prods[i - 1];
		}
	}

	std::cout << (productivity + (actualPost < m ? std::abs(actualSum) : actualSum)) << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
