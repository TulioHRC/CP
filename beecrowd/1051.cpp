#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float sal; std::cin >> sal;

	std::cout.precision(2);
	std::cout << std::fixed;

	float pay = 0;

	if(sal <= 2000) std::cout << "Isento";
	else {
		sal -= 2000;
		if(sal > 1000) {
			pay += 1000 * 0.08;
		        sal -= 1000;
			if(sal > 1500) {
				pay += 1500 * 0.18;
				sal -= 1500;
				pay += sal * 0.28;
			} else {
				pay += sal * 0.18;
			}
		} else {
			pay += sal * 0.08;
		}

		std::cout << "R$ " << pay;
	}

	std::cout << "\n";

	return 0;
}
