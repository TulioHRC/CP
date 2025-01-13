#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n, m; std::cin >> n >> m;

	int count = 0;
	int aux;
	int boost = 0;

	while(n--) {
		std::cin >> aux;
		aux += boost;
		boost = m - aux;
		
		if (boost > 0) count += boost;
		else count -= boost;
	}

	std::cout << count << std::endl;

	return 0;
}
