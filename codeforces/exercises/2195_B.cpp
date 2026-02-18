#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int getPredecessor(int num) {
	while (num % 2 != 1) {
		num = num >> 1;
	}

	return num;
}

int main() { _
	int t; std::cin >> t;
	int n, aux;


	while(t--) {
		std::cin >> n;

		bool can = true;
		
		for (int i = 1; i <= n; i++) {
			std::cin >> aux;

			if (getPredecessor(i) != getPredecessor(aux)) can = false;
		}

		if (can) std::cout << "YES\n";
		else std::cout << "NO\n";
	}

	return 0;
}
