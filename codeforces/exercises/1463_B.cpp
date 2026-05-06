#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		std::vector<ll> a;
		a.reserve(n);
		std::vector<ll> b;
		b.reserve(n);

		ll aux;
		ll odd_sum = 0;
		ll even_sum = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;

			a.push_back(aux);

			odd_sum += i % 2 == 0 ? 0 : aux;
			even_sum += i % 2 != 0 ? 0 : aux;
		}

		for (int i = 0; i < n; i++) {
			if (odd_sum > even_sum) {
				b.push_back(i % 2 == 0 ? 1 : a[i]);
			} else {
				b.push_back(i % 2 != 0 ? 1 : a[i]);
			}
			std::cout << b[i] << " ";
		}

		std::cout << "\n";
	}

	return 0;
}
