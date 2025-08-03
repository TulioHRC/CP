#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	
	int n, aux;
	ll num;
	bool res;

	while (t--) {
		std::cin >> n;
		res = true;
		for (int i = 0; i < n; i++) {
			std::cin >> num;
			
			aux = (n - i - 1 > i) ? n - i - 1 : i;

			if (num <= (aux * 2)) res = false;
		}
		std::cout << (res == true ? "YES" : "NO") << std::endl;
	}

	return 0;
}
