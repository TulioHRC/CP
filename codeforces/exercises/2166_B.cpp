#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

ll min(ll a, ll b) {
	return a > b ? b : a;
}

ll solve (ll a, ll b, ll n) {
	ll res = 1;

	ll b_tabs = a / b;
	
	if (b_tabs >= n) return res;

	if (b_tabs > 1 || (b_tabs == 1	&& a != b)) res++;

	return res;
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		ll a, b, n; std::cin >> a >> b >> n;

		std::cout << solve(a, b, n) << "\n";
	}

	return 0;
}
