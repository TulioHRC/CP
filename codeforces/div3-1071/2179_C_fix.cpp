#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		ll min, min2, aux;
		std::cin >> min >> aux;
		if (aux < min) {
			min2 = min;
			min = aux;
		} else {
			min2 = aux;
		}

		for (int i = 0; i < (n - 2); i++) {
			std::cin >> aux;
			if (aux < min) {
				min2 = min;
				min = aux;
			} else if (aux < min2) min2 = aux;
		}

		if (min > (min2 - min)) std::cout << min << "\n";
		else std::cout << (min2 - min) << "\n";
	}

	return 0;
}
