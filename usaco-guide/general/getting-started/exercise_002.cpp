#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll n; std::cin >> n;
	
	while(n != 1) {
		std::cout << n << " ";
		n = n % 2 == 0 ? n / 2 : n * 3 + 1;
	} 

	std::cout << "1\n";

	return 0;
}
