#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int a, b;
	
	std::cin >> a >> b;

	while (a > 0 && b > 0) {
		int min = std::min(a, b);
		int max = std::max(a, b);
		int sum = 0;

		for(int i = min; i <= max; i++) {
			std::cout << i << " ";
			sum += i;
		}

		std::cout << "Sum=" << sum << "\n";

		std::cin >> a >> b;
	}

	return 0;
}
