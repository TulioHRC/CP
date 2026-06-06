#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, aux;

	while(t--) {
		std::cin >> n;
		std::pair<int, int> bestPair;
		int bestSize = 0;

		std::pair<int, int> p(0, 0);
		int s = 0;

		std::vector<int> a;
		a.reserve(n);

		std::map<int, int> count;

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			a.push_back(aux);
			if(count.find(aux) == count.end()) count[aux] = 1;
			else count[aux]++;
		}

		for (int i = 0; i < n; i++) {
			if (count[a[i]] == 1) {
				if (s == 0) p.f = i;
				p.s = i;
				s++;
				if (s > bestSize) {
					bestPair = {p.f, p.s};
					bestSize = s;
				}
			} else {
				s = 0;
			}
		}

		if(bestSize == 0) std::cout << 0 << "\n";
		else std::cout << (bestPair.f + 1) << " " << (bestPair.s + 1) << "\n";
	}

	return 0;
}
