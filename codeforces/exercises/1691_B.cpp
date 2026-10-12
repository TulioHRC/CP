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

void solve() {
	std::cin >> n;

	std::vector<ll> a(n);
	std::map<ll, int> count;

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];

		if (count.find(a[i]) == count.end()) count[a[i]] = 0;
		count[a[i]]++;
	}

	std::vector<int> res(n);
	int actual_num = 0;
	for (int i = 0; i < n; i++) {
		if (count[a[i]] == 1) {
			std::cout << -1 << "\n";
			return;
		}

		if (i > 0 && a[i] != a[i - 1]) actual_num = 0;

		int to_change = (1 + actual_num) % count[a[i]] + (i - actual_num) + 1; 
		actual_num++;
		res[i] = to_change;
	}

	for (int i = 0; i < n; i++) {
		std::cout << res[i] << " ";
	}
	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
