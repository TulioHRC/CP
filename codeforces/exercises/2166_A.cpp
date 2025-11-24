#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n;
		std::string s;
		std::cin >> n >> s;
		
		int count_last_same = 0;

		for (int i = 0; i < (n - 1); i++) {
			if (s[i] == s[n - 1]) count_last_same++;
		}

		std::cout << n - count_last_same - 1 << "\n";
	}

	return 0;
}
