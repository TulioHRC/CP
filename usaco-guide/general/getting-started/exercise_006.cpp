#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll k, n, w;

	std::cin >> k >> n >> w;

	ll total_dol = 0;

	for (ll i = 0; i < w; i++) {
		total_dol += (i + 1) * k;
	}

	ll needed_dol = total_dol - n;

	if (needed_dol < 0) std::cout << 0 << "\n";
	else std::cout << needed_dol << "\n";

	return 0;
}
