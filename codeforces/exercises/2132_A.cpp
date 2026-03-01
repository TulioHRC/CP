#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, m;
	std::string a, b, c;

	while(t--) {
		std::cin >> n >> a >> m >> b >> c;

		std::string res(n + m, 'a');

		int start = 0;
		int end = n + m - 1;

		for (int i = m; i > 0; i--) {
			if (c[i-1] == 'V') {
				res[start] = b[i-1];
				start++;
			} else {
				res[end] = b[i-1];
				end--;
			}
		}

		for (int i = 0; i < n; i++) {
			res[start + i] = a[i];
		}

		std::cout << res << "\n";
	}

	return 0;
}
