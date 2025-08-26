#include <bits/stdc++.h>

#define f first
#define s second

#define _ std::ios_base::sync_with_stdio(); std::cin.tie(0);

typedef long long ll;

int main() { _
	int n, s; std::cin >> n >> s;
	std::vector<ll> v;
	v.reserve(n);

	ll aux;
	while (n--) {
		std::cin >> aux;
		v.push_back(aux);
	}

	ll low = 0;
	ll high = 1e10;
	
	ll prev, count, mid;

	while ((high - low) > 1) {
		mid = (low + high) / 2;
		count = 0;
		prev = -1e10;
		for (ll i : v) {
			if (i - prev >= mid) {
				count++;
				prev = i;
			}
		}

		if (count >= s) low = mid;
		else high = mid;
	}

	std::cout << low << "\n";

	return 0;
}