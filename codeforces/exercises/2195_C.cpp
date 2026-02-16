#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, res;

	while(t--) {
		std::cin >> n;
		res = 0;
		int aux, past;

		std::cin >> past;
		for (int i = 1; i < n; i++) {
			std::cin >> aux;
			if (past + aux == 7 || past == aux) {res++; past = 0;}
			else past = aux;
		}

		std::cout << res << "\n";
	}

	return 0;
}
