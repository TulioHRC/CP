#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, lower, higher, num, aux;

	while(t--) {
		std::cin >> n;	
		std::cin >> num;
		if (num < 0) num = (-1) * num;
		higher = 0;
		lower = 0;

		for (int i = 1; i < n; i++) {
			std::cin >> aux;
			if (aux < 0) aux = (-1) * aux;
			if (aux > num) higher++;
			else lower++;
		}

		if (higher >= lower) std::cout << "YES\n";
		else {
			std::cout << ((higher == lower - 1) ? "YES" : "NO") << "\n";
		}
	}

	return 0;
}
