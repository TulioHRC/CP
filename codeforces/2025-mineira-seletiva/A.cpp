#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;
	int res;

	int fins = (n - 1) / 7 + 1;
	if (n <= 3) res = 1;
	else {
		if ((n - 1) % 7 == 0) n+=2;
		if ((n - 2) % 7 == 0) n++;
		res = n - 2 * fins;

	}

	std::cout << res << "\n";

	return 0;
}
