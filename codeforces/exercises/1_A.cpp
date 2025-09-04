#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll a, b, c; std::cin >> a >> b >> c;

	ll res = 0;

	ll x = a / c;
	if (a % c > 0) x++;

	ll y = b / c;
	if (b % c > 0) y++;

	res = x * y;

	std::cout << res << "\n";

	return 0;
}
