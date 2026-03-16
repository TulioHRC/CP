#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	int n; std::cin >> n;
	int aux;

	std::vector<int> order;
	order.reserve(n);
	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		order.push_back(aux - 1);
	}

	std::vector<int> ids;
	ids.reserve(n);
	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		ids.push_back(aux);
	}

	for (int i = 0; i < 3; i++) {
		std::vector<int> res(n);
		for (int j = 0; j < n; j++) {
			res[j] = ids[order[j]];
		}
		ids = res;

	}

	for (int r : ids) {
		std::cout << r << "\n";
	}

	return 0;
}
