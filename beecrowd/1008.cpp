#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int num, days; std::cin >> num >> days;
	float salary; std::cin >> salary;

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << "NUMBER = " << num << std::endl;
	std::cout << "SALARY = U$ " << salary * days << std::endl;

	return 0;
}
