#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	std::string s;

	while (t--) {
		std::cin >> s;

		int count = 0;
		bool could = false;
		bool can = false;
		for (char c : s) {
			if (could == true) can = true;
			if (c == '(') {
				count++;
			} else {
				count--;
			}
			
			if(count == 0) could = true;
		}

		if (can == true) std::cout << "YES\n";
		else std::cout << "NO\n"; // (()()) = no
	}

	return 0;
}
