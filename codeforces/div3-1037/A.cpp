#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int x;

	while(t--) {
		std::cin >> x;
		
		int i = 1;
		while (i <= x) {
			i *= 10;
		}
		i /= 10;

		int min = 9;
		while (i >= 1) {
			if (x / i < min) {
				min = x / i;
			}
			x -= i * (x / i);
			i /= 10;
		}

		std::cout << min << "\n";
	}

	return 0;
}
