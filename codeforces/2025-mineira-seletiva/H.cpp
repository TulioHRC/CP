#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll n; std::cin >> n;

	ll sum = 0;
	ll to_add = n * (n - 1) / 2;
	ll div = 1;

	for (ll i = n; i > 1; i--) {
		div *= i;
		for (ll j = i - 1; j > 0; j--) {
			std::cout << "summing " << j << "\n";
			sum += to_add;
		}
	}
	std::cout << sum << " - sum \n" << div << " - div \n";



	double res = (double)sum / (double)div;

	std::cout << res << "\n";

	return 0;
}
