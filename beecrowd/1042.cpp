#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::set<int> sort;

	int a, b, c; std::cin >> a >> b >> c;

	sort.insert(a); sort.insert(b); sort.insert(c);
	
	for (int n : sort) {
		std::cout << n << std::endl;
	}

	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;


	return 0;
}
