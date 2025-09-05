#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;
		std::string lamps; std::cin >> lamps;

		int countOnes = 0;
		for (char i : lamps) {
			if (i == '1') countOnes++;
		}

		if (countOnes % 2 > 0) std::cout << "NO\n";
		else {
			if (countOnes == 2) {
				bool found = false;
				for (int i = 0; i < (n-1); i++) {
					if (lamps[i] == '1' && lamps[i+1] == '1') {
						std::cout << "NO\n";
						found = true;
						break;
					}
				} 
				if (!found) std::cout << "YES\n";
			}
			else {
				std::cout << "YES\n";
			}
		}
	}

	return 0;
}
