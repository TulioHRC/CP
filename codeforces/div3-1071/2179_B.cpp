#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int abs_num(int num) {
	return num > 0 ? num : num * -1;
}

int main() { _
	int t; std::cin >> t;
	
	int n, aux;

	while (t--) {
		std::cin >> n;
		int sum = 0;
		
		std::vector<int> vec;
		vec.reserve(n);

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			vec.push_back(aux);
		}

		for (int i = 1; i < n; i++) {
			int tot = vec[i-1] - vec[i];
			sum += tot > 0 ? tot : tot * -1;
		}

		int biggestOut = (vec[1] - vec[0]) > 0 ? vec[1] - vec[0] : vec[0] - vec[1];

		for (int i = 1; i < (n-1); i++) {
			int tot = abs_num(vec[i] - vec[i - 1]) + abs_num(vec[i] - vec[i+1]) - abs_num(vec[i-1] - vec[i+1]);
			if (tot > biggestOut) biggestOut = tot;
		}

		if (abs_num(vec[n-1] - vec[n-2]) > biggestOut) biggestOut = abs_num(vec[n-1] - vec[n-2]);

		std::cout << sum - biggestOut << "\n";
	}

	return 0;
}
