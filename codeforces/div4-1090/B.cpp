#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int aux;

	while(t--) {
		int max = -68;

		int sum = 0;
		std::vector<int> a;
		a.reserve(7);

		for (int i = 0; i < 7; i++) {
			std::cin >> aux;
			if (aux > max) max = aux;
			a.push_back(aux);
		}

		for (int i : a) {
			sum += i * -1;
		}

		sum = sum - (max) * -1 + max;

		std::cout << sum << "\n";
	}

	return 0;
}
