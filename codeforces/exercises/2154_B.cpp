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
ll aux, count_op_2, biggest;
std::vector<ll> a(3e5);

void solve() {
	std::cin >> n;

	count_op_2 = 0;
	biggest = -1;

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];


		if (i % 2 != 0) {
			// peak
			a[i] = biggest > a[i] ? biggest : a[i];

			if (i == 1) {
				// valley at i=0 has no left neighbor, so its bound is
				// this peak (only known now that a[1] has been read)
				if (a[0] >= a[i]) count_op_2 += a[0] - a[i] + 1;
			}
		} else {
			if (a[i] >= biggest && i != 0) count_op_2 += a[i] - biggest + 1;
		}

		biggest = std::max(a[i], biggest);
	}

	std::cout << count_op_2 << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
