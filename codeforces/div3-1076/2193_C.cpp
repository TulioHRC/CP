#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<int> a(3e5);
	std::vector<int> sums(3e5);
	sums[0] = 0;
	std::vector<int> maxes(3e5);

	while(t--) {
		int n, q; std::cin >> n >> q;
		
		int aux;
		for (int i = 0; i < n; i++){
			std::cin >> a[i];
		}
		for (int i = 0; i < n; i++){
			std::cin >> aux;
			if (aux > a[i]) a[i] = aux;
		}

		int actualMax = a[n-1];
		for (int i = (n - 1); i >= 0; i--) {
			if (a[i] > actualMax) actualMax = a[i];

			maxes[i] = actualMax;
		}

		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += maxes[i];
			sums[i+1] = sum;
		}

		int l, r;
		for (int i = 0; i < q; i++) {
			std::cin >> l >> r;

			std::cout << (sums[r] - sums[l-1]) << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
