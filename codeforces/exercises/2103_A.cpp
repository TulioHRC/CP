#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	
	std::vector<int> count;
	count.reserve(101); // max n is 101
	for (int i = 0; i < 101; i++) count.push_back(-1); // O(100)

	int n, res, aux;

	for (int a = 0; a < t; a++) { // O(500)
		std::cin >> n;
		res = 0;
		for (int i = 0; i < n; i++) { // O(100)
			std::cin >> aux;
			if (count[aux] != a) {
				count[aux] = a;
				res++;
			}
		}

		std::cout << res << "\n";
	}

	return 0;
}
