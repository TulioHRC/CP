#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int n, i;
std::vector<ll> b(100);
bool can;

void solve() {
	std::cin >> n;

	for (i = 0; i < n; i++) std::cin >> b[i];

	std::sort(b.begin(), b.begin() + n);

	can = true;
	for (i = (n - 3); i >= 0; i--) {
		if (b[i] != (b[i+2] % b[i+1])) can = false;
	}

	if (can) {
		std::cout << b[n-1] << " " << b[n-2] << "\n";
	} else {
		std::cout << -1 << "\n";
	}
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
