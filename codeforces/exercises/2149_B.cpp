#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n;
	ll aux;

	while(t--) {
		std::cin >> n;
		std::vector<ll> a;
		a.reserve(n);
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			a.push_back(aux);
		}
		std::sort(a.begin(), a.end());
		
		ll max = 0;	
		
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				ll absDiff = a[i] > a[i+1] ? a[i] - a[i+1] : a[i+1] - a[i];
				max = absDiff > max ? absDiff : max;
			}
		}

		std::cout << max << "\n";
	}

	return 0;
}
