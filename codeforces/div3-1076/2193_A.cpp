#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, x, sVar; std::cin >> n >> sVar >> x;

		int sum = 0;

		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			sum += aux;
		}	

		if (sum > sVar || (sVar - sum) % x != 0) {
			std::cout << "NO\n";
		} else {
			std::cout << "YES\n";
		}
	}

	return 0;
}
