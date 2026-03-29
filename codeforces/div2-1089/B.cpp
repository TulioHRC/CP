#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int aux;

	std::map<int, int> marked; // <index, test>

	while(t--) {
		int n; std::cin >> n;

		int res = 0;
		int bestRes = 0;
		for (int i = 1; i <= n; i++) {
			std::cin >> aux;

			bool found = marked.find(i) != marked.end();
			if (!found || marked[i] != t) {
				res++;
			}
			marked[aux] = t;

			if (res > bestRes) bestRes = res;
		}

		std::cout << bestRes << "\n";
	}

	return 0;
}
