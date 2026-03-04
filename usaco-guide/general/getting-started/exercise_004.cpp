#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int w; std::cin >> w;

	std::cout << (w % 2 == 0 && w != 2 ? "YES" : "NO") << "\n";

	return 0;
}
