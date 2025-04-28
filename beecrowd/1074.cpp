#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int val;
	std::string signal;
	std::string parity;

	while (t--) {
		std::cin >> val;
		
		if (val == 0) std::cout << "NULL\n";
		else {
			signal = val > 0 ? "POSITIVE" : "NEGATIVE";
			parity = (val % 2) ? "ODD" : "EVEN";
			std::cout << parity << " " << signal << "\n";
		}
	}

	return 0;
}
