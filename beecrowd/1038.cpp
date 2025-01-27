#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::map<int, double> table({
		{1, 4}, {2, 4.5}, {3, 5}, {4, 2}, {5, 1.5}
	});

	int a, b; std::cin >> a >> b;

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << "Total: R$ " << table[a] * b << std::endl;

	return 0;
}
