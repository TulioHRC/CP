#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

std::vector<int> p(101, 0);

int main() { _
	int n; std::cin >> n;

	int a;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		p[a]++;
	}
	
	std::vector<int> res;
	res.reserve(n);
	for (int i = 0; i < n; i++) res.push_back(0);
	int actual = n - 1;

	for (int i = 100; i > 0; i--){
		while (p[i] > 0) {
			p[i]--;
			res[actual] = i;
			actual--;
		}
	}

	for (int i = 0; i < (n-1); i++) std::cout << res[i] << " ";
	std::cout << res[n-1] << "\n";

	return 0;
}
