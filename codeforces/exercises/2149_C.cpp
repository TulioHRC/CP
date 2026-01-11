#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

std::map<int, int> already;

int calculate_changes(int goal, int t, int appears) {
	int res = 0;
	for (int i = 0; i < goal; i++) {
		if (already[i] != t) res++;
	} 
	return res < appears ? appears : res;
}

int main() { _
	int t; std::cin >> t;

	int n, k, appears, aux;
	for (int i = 0; i < (3 * 1e5); i++) {
		already[i] = -1;
	}

	

	while(t--) {
		std::cin >> n >> k;

		appears = 0;

		for (int i = 0; i < n; i++) {
			std::cin >> aux;

			if (aux == k) appears++;

			already[aux] = t;
		}

		std::cout << calculate_changes(k, t, appears) << "\n";
	}

	return 0;
}
