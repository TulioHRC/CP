#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		std::vector<ll> a(n);
		std::string s;

		for (int i = 0; i < n; i++) std::cin >> a[i];
		std::cin >> s;

		std::vector<ll> sum_window(n);
		sum_window[0] = a[0];
		for (int i = 1; i < n; i++) {
			sum_window[i] = sum_window[i-1] + a[i];
		}

		int l = 0;
		int r = n - 1;
		ll res = 0;
		
		while (l < r) {
			for (; s[l] != 'L' && l < (n - 1); l++);
			for (; s[r] != 'R' && r > 0; r--);

			//std::cout << "L " << l << "R " << r << std::endl;
		
			if (l < r) {
				res += sum_window[r] - sum_window[l] + a[l];
				l++;
				r--;
			}
		}
		

		std::cout << res << "\n";
	}

	return 0;
}
