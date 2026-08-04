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

int a, b, c;

void solve() {
	std::cin >> a >> b >> c;

	int rounds = 0;

	while (a != b && a != c && b != c) {
		if (a > b && a > c) {
			a--;
			if (b < c) b++;
			else c++;
		} else if (b > a && b > c) {
			b--;
			if (a < c) a++;
			else c++;
		} else {
			c--;
			if (a < b) a++;
			else b++;
		}
		rounds++;
	}

	std::cout << rounds << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
