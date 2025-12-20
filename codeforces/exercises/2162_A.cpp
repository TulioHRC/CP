#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		int maxNum = 0;
		int aux;

		while(n--) {
			std::cin >> aux;
			if (aux > maxNum) maxNum = aux;
		}
		std::cout << maxNum << "\n";
	}

	return 0;
}
