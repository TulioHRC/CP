#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b, c; std::cin >> a >> b >> c;
	int bigger = a;
	if (b > a) bigger = b;
	if (c > bigger) bigger = c;

	std::cout << bigger << " eh o maior" << std::endl;

	return 0;
}
