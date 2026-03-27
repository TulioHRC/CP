#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);
	int n, aux; std::cin >> n;

	std::vector<int> a;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		a.push_back(aux);
	}

	int res = -1;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		int act = 0;
		int j = i + 1;
		while(j != i) {
			if (j == n) j = 0;
			else {
				act++;
				sum += act * a[j];
				j++;
			}
		}

		if (sum < res || res == -1) res = sum;
	}

	std::cout << res << "\n";

	return 0;
}
