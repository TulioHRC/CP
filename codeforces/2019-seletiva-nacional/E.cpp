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

int n, aux;

void solve() {
	std::cin >> n;
	std::vector<int> v;

	v.reserve(n);

	for (int i = 0; i < n; i++) {
		std::cin >> aux;

		v.push_back(aux);
	}

	// center finding
	int center = -1;
	for (int i = 0; i < n; i++) {
		int sumL = 0;
		int sumR = 0;

		for (int j = i - 1; j >= 0; j--) {
			sumL += v[j] * (i - j);
		}

		for (int j = i + 1; j < n; j++) {
			sumR += v[j] * (j - i);
		}

		if (sumL == sumR) {
			center = i;
			break;
		}
	}

	std::cout << (center + 1) << "\n";
}

int main() { _
	solve();

	return 0;
}
