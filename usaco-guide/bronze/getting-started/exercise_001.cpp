#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("shell.in", "r", stdin);

	int n; std::cin >> n;

	std::vector<int> scores = {0, 0, 0};
	std::vector<int> positions = {1, 2, 3}; 
	int max = 0;

	for (int i = 0; i<n; i++) {
		int d,e,g; std::cin >> d >> e >> g;

		for (int j = 0; j < 3; j++) {
			if (positions[j] == d) {
				for (int k = 0; k < 3; k++) {
					if (positions[k] == e){
						positions[j] = e;
						positions[k] = d;
						break;
					}
				}
				break;
			}
		}

		for (int j = 0; j < 3; j++) {
			if (g == positions[j]) {
				scores[j]++;
				max = scores[j] > max ? scores[j] : max;
			}

		}
	}

	freopen("shell.out", "w", stdout);

	std::cout << max << "\n";

	return 0;
}
