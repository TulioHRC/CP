#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n;
	std::string s;
	int a, b, c, d;

	while(t--) {
		std::cin >> n >> s;
		a = 0; b = 0; c = 0; d = 0;
		for (int i = 0; i < 4 * n; i++) {
			if (s[i] == 'A') a++;
			else if (s[i] == 'B') b++;
			else if (s[i] == 'C') c++;
			else if (s[i] == 'D') d++;
		}

		std::cout << std::min(a, n) + std::min(b, n) + std::min(c, n) + std::min (d, n) << "\n";
	}

	return 0;
}
