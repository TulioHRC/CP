#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		std::string s; std::cin >> s;

		bool protect = false;
		int res = 0;
		int count = 0;
		for (char c : s) {
			if (c == '1') {
				res++;

				protect = true;
				count = 0;
			} else {
				count++;
				if (count > 2) {
					count = 0;
					res++;
				}
			}
		}
		std::cout << res << "\n";
	}

	return 0;
}
