#include <bits/stdc++.h>

#define f first
#define s second

#define _ std::ios_base::sync_with_stdio(); std::cin.tie(0);

typedef long long ll;

bool is_prime(int num) {
	for (int aux = 2; aux <= (num / 2); aux++) {
		if (num % aux == 0) return false;
	}
	return true;
}

int main() { _
	ll n; std::cin >> n;

	for (int i = 2; i < n; i++) {
		if (is_prime(i) && !is_prime(n - i)) {
			std::cout << i << " " << n - i << "\n";
			return 0;
		}
	}

	return 0;
}
