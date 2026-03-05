#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b; std::cin >> a >> b;
	int c, d; std::cin >> c >> d;
	int e, f; std::cin >> e >> f;
	int g, h; std::cin >> g >> h;

	int x, y, z;

	z = h - g;
	y = (z + f) - e;
	x = (y + d) - c;

	std::cout << x << "\n";
	std::cout << y << "\n";
	std::cout << z << "\n";

	return 0;
}
