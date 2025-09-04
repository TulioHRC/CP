#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int a, b, c, d;
	while (t--) { // O(10^4)
		std::cin >> a >> b >> c >> d;

		int gellyMin = a > c ? c : a;
		int flowerMin = b > d ? d : b;

		if (gellyMin >= flowerMin) std::cout << "Gellyfish\n";
		else std::cout << "Flower\n";

	}

	return 0;
}
