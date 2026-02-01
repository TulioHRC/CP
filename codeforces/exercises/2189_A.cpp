#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, h, l; std::cin >> n >> h >> l;

		int biggest_only = 0;
		int shared = 0;
		int max = h > l ? h : l;
		int min = h > l ? l : h;
		int aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			if (aux > min && aux <= max) biggest_only++;
			else if (aux <= min) shared++;
		}

		int total = (biggest_only > shared) ? shared : (biggest_only + (shared-biggest_only) / 2);

		std::cout << total << "\n";
	}

	return 0;
}
