#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		int res = 0;

		int max = 1 << n;
		int nActual = n;
		while (nActual > 0) {
			res += nActual;
			std::cout << (1 << nActual) - 1 << " ";
			nActual--;
		}
		
		int newN = 3;
		for (int i = 5; i < max; i += 2) {
			if ((1 << newN) - 1 != i) {
				res++;
				std::cout << i << " ";
			} else {
				newN++;
			}
		}

		for (int i = 0; i < max; i+= 2){
			std::cout << i << " ";
		}

		std::cout << "\n";
	}

	return 0;
}
