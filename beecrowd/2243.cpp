#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;
	int max = 0;
	
	std::vector<int> cols;
	cols.reserve(n);
	int aux;
	for(int i = 0; i < n; i++) {
		std::cin >> aux;
		// std::cout << aux << std::endl;
		cols.push_back(aux);
	}

	// std::cout << std::endl;

	for(int i = 0; i < n; i++) {
		int actual = 0;
		int maxPos = cols[i];
		
		// std::cout << maxPos << " ";

		while(true) {
			if((i - actual) < 0 || (actual + i) >= n) break;
			if(actual + 1 > maxPos) break;
			
			int minAux = std::min(cols[i-(actual + 1)], cols[i + actual + 1]) + actual + 1;
			maxPos = std::min(maxPos, minAux);

			actual++;
		}
		// std::cout << actual << std::endl;

		if (max < actual) max = actual;
	}

	std::cout << max << std::endl;

	return 0;
}
