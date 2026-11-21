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

std::vector<int> max_per_count(245);

void solve() {
	std::cin >> n;

	for (int i = 1; i < 245; i++) {
		if (max_per_count[i] >= n) {
			std::cout << i << "\n";
			break;
		}
	}
}

int main() { _
	int t; std::cin >> t;

	max_per_count[1] = 1;
	max_per_count[2] = 2;
	max_per_count[3] = 3;
	int actual = 3;
	int x = 2;
	for (int m = 4; m < 245; m++) {
		actual += (x + 1 - (m - x)) == 0 ? 1 : (x + 2 - (m - x));
		int C_plus = (m - x - 1) - (x + 2 - (m - x));

		if (C_plus >= 0) {
			x++;
			actual += C_plus;
		}

		max_per_count[m] = actual;
		//std::cout << m << " - " << x << " - " << actual << "\n";
	}

	while(t--) {
		solve();
	}

	return 0;
}
