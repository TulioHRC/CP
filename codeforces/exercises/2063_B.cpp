#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, l, r; std::cin >> n >> l >> r;

		std::vector<ll> a;
		a.reserve(n);

		ll aux;
		ll sum = 0;
		for (int i = 1; i <= n; i++) {
			std::cin >> aux;
			a.push_back(aux);
			if (i >= l && i <= r) sum += aux;
		}

		ll sumSub = 0;
		int start = 0;
		int end = r - 1;
	
		std::sort(a.begin() + l - 1, a.begin() + r);
		std::sort(a.begin(), a.begin() + l - 1);
		std::sort(a.begin() + r, a.end());

		while(start < (l - 1) && end >= (l - 1)) {
			if (a[start] < a[end]) {
				sumSub += a[end] - a[start];
				start++;
				end--;
			} else {
				break;
			}
		}

		ll sumSubRight = 0;
		int startR = r;
		int endR = r - 1;

		while(startR < n && endR >= (l - 1)) {
			if (a[startR] < a[endR]) {
				sumSubRight += a[endR] - a[startR];
				startR++;
				endR--;
			} else {
				break;
			}
		}

		std::cout << (sumSubRight > sumSub ? sum - sumSubRight : sum - sumSub) << "\n";
	}

	return 0;
}
