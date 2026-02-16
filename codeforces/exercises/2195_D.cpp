#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n;
	ll aux;
	std::vector<ll> arr(3e5 + 10);
	std::vector<ll> res(3e5 + 10);

	while(t--) {
		std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			arr[i] = aux;
		}

		for (int i = 1; i < (n - 1); i++) {
			res[i] = ((arr[i+1] - arr[i]) - (arr[i] - arr[i-1])) / 2;
		}

		ll sum = 0;
		for (int i = 1; i < (n - 1); i++) {
			sum += res[i] * (n - i - 1);
		}
		res[0] = (arr[n-1] - sum) / (n - 1);

		sum = 0;
		for (int i = 1; i < (n - 1); i++) {
			sum += res[i] * i;
		}
		res[n - 1] = (arr[0] - sum) / (n - 1);

		for (int i = 0; i < n; i++) {
			std::cout << res[i] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
