#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;

	int actualFac = 1;
	int actualValFac = 1;

	while(actualValFac * (actualFac + 1) < n){
		actualFac++;
		actualValFac *= actualFac;
	}

	int count = 0;

	while(n != 0) {
		while(actualValFac > n) {
			actualValFac = actualValFac / actualFac;
			actualFac--;
		}
		count++;
		n -= actualValFac;
	}

	std::cout << count << std::endl;

	return 0;
}
