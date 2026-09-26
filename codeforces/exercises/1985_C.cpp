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
std::map<ll, int> exists_for_test_n;

void solve(int t) {
	std::cin >> n;

	ll sum = 0;
	ll aux;

	int res = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;

		exists_for_test_n[aux] = t;
		sum += aux;

		if (sum % 2 == 0 && exists_for_test_n.find(sum/2) != exists_for_test_n.end() && exists_for_test_n[sum / 2] == t) {
			res++;
		}
	}

	std::cout << res << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve(t);
	}

	return 0;
}
