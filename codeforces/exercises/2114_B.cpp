#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	int n, k;
	std::string aux;
	int zeros, ones;
	int dif, max;

	for (;t--;){
		ones = 0;
		zeros = 0;
		std::cin >> n >> k;
		std::cin >> aux;
		for (int i = 0; i < n; i++) {
			if(aux[i] == '1') ones++;
			else zeros++;
		}

		dif = zeros - ones;
		if (dif < 0) dif = ones - zeros;
		dif /= 2; // Min amount (+ 2 if increase)
		
		max = ones / 2 + zeros / 2;

		if((k <= max) && (k >= dif) && ((k - dif) % 2 == 0)) std::cout << "YES" << "\n";
		else std::cout << "NO" << "\n";
	}

	return 0;
}
