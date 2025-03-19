#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	unsigned int a, b;

	while (std::cin >> a >> b){
		std::cout << (a ^ b) << std::endl;
	}

	return 0;
}
