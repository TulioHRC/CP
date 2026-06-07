#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, m, k; std::cin >> n >> m >> k;

		std::string s;
		std::cin >> s; // 1 to n

		int actualPos = 0; // 0 to n + 1
		int actualK = 0;
		bool res = true;

		while (actualPos != n + 1) {
			if (actualPos == 0 || s[actualPos - 1] == 'L') {
				int bestMov = 1;
				for (int i = 1; i <= m; i++) {
					if (actualPos - 1 + i == n || s[actualPos - 1 + i] == 'L') {
						bestMov = i;
						break;
					} else if (s[actualPos - 1 + i] == 'W') {
						if (s[actualPos - 1 + bestMov] != 'L') {
							bestMov = i;
						}
					}
				}
				actualPos += bestMov;
			} else if (s[actualPos - 1] == 'W') {
				actualPos++;
				actualK++;
				if (actualK > k) {
					res = false;
					break;
				}
			} else {
				res = false;
				break;
			}
		}

		std::cout << (res == true ? "Yes" : "No") << "\n";
	}

	return 0;
}
