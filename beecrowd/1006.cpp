#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float a, b, c; std::cin >> a >> b >> c;

	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << "MEDIA = " << (float)(a * 2 + b * 3 + c * 5) / 10 << std::endl;

	return 0;
}

