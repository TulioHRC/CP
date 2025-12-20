#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t; 

	while (t--) {
		std::string a;
		int n;

		std::cin >> n >> a;

		int tot = 0;
		std::vector<int> vec;
		vec.reserve(n);

		for (int i = 0; i < n; i++) {
			if (a[i] == '1') {
				tot++;
				vec.push_back(i);
			}
		}

		std::cout << tot << "\n";
		for (int i : vec) {
			std::cout << i + 1 << " ";
		}

		std::cout << "\n";
	}

	return 0;
}
