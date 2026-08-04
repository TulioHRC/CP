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
std::vector<ll> b(3e5), sorted_b(3e5);
std::map<ll, ll> translations;

void solve() {
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> b[i];
		sorted_b[i] = b[i];
	}

	std::sort(sorted_b.begin(), sorted_b.begin() + n);

	ll actual = sorted_b[0];
	ll actual_count = 1;
	ll actual_sum = 0;
	ll last = -1;

	for (int i = 1; i < n; i++) {
		if (sorted_b[i] == actual) { actual_count++; continue; }
		
		if ((sorted_b[i] - actual_sum) % actual_count) {
			std::cout << -1 << '\n';
			return;
		}

		translations[actual] = (sorted_b[i] - actual_sum) / actual_count;
		if (translations[actual] <= last) {
			std::cout << -1 << '\n';
			return;	
		}
		last = translations[actual];
		actual_count = 1;
		actual = sorted_b[i];
		actual_sum = actual;
	}

	if (actual_sum == 0 && actual != 0) {
		std::cout << -1 << '\n';
		return;
	}

	translations[sorted_b[n-1]] = (actual_sum == 0) ? 1 : last + 1;

	for (int i = 0; i < n; i++) {
		std::cout << translations[b[i]] << " ";
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
