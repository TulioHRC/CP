#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n;
	std::string str;

	while (t--) {
		std::cin >> n >> str;
	
		std::stack<char> stac;

		stac.push(str[0]);

		for (int i = 1; i < n; i++) {
			char c = str[i];

			if (stac.size() > 0 && stac.top() == c) stac.pop();
			else stac.push(c);
		}

		if (stac.size() > 0) {
			std::cout << "NO\n";
		} else {
			std::cout << "YES\n";
		}
	}

	return 0;
}
