#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, k, res, act, aux;

	while(t--) {
		std::cin >> n >> k;

		res = 0;
		act = 0;

		for (int i = 0; i < n; i++) {
			std::cin >> aux;

			if (aux == 0) act++;
			else act = 0;
			
			if (act == k) {
				act = 0;
				res++;
				i++;
				if (i < n)
					std::cin >> aux;
			}
		}

		std::cout << res << "\n";
	}

	return 0;
}
