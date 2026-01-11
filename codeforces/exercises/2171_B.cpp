#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, res;
	std::vector<int> a(3 * 1e5, 0);

	while (t--) {
		std::cin >> n;

		std::cin >> a[0];
		for (int i = 1; i < (n-1); i++) {
			std::cin >> a[i];
			
			if (a[i] == -1) a[i] = 0;
		}
		std::cin >> a[n-1];

		if (a[n-1] == -1 && a[0] == -1) {
			a[0] = 0;
			a[n-1] = 0;
		} else if (a[0] == -1) {
			a[0] = a[n-1];
		} else if (a[n-1] == -1) {
			a[n-1] = a[0];
		}
		
		res = a[n-1] >= a[0] ? a[n-1] - a[0] : a[0] - a[n-1];
		std::cout << res << "\n";
		for (int i = 0; i < n; i++) {
			std::cout << a[i] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
