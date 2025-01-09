#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::string name; std::cin >> name;
	double sal, sales; std::cin >> sal >> sales;

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << "TOTAL = R$ " << sal + sales * 0.15 << std::endl; 

	return 0;
}
