#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n, res, a, b, c; std::cin >> n;

	res = 0;

	while(n--) {
		std::cin >> a >> b >> c;

		if (a + b + c >= 2) res++;
	}

	std::cout << res << "\n";

	return 0;
}
