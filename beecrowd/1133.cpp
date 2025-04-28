#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b; std::cin >> a >> b;

	for (int i = std::min(a, b) + 1; i < std::max(a, b); i++){	
		if ((i%5 == 2) || (i%5 == 3)) {
			std::cout << i << std::endl;
		}
	}

	return 0;
}
