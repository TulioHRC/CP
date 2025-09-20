#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, aux;
	int diff;
	std::vector<int> vec(10);

	while (t--) {
		diff = 0;
		std::cin >> n;
		
		for (int i = 0; i < n; i++) {
			std::cin >> vec[i];
		}

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			if (aux < vec[i]) diff += vec[i] - aux;
		}

		std::cout << diff + 1 << "\n";
	}

	return 0;
}
