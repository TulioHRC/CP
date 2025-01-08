#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double n = 3.14159;
	double R; std::cin >> R;
	
	std::cout << std::fixed;
	std::cout.precision(4);
	std::cout << "A=" << n * R * R << std::endl;

	return 0;
}
