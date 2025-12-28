#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll aux;
	while(t--) {
		ll min, secondMin;
	        int n; std::cin >> n;
	
		std::cin >> min;
		std::cin >> aux;
		if (aux > min) secondMin = aux;
		else {
			secondMin = min;
			min = aux;
		}

		for (int i = 2; i < n; i++) {
			std::cin >> aux;

			if (aux < min) {secondMin = min; min = aux;};
		}

		if (secondMin - min > min) {
			std::cout << secondMin - min << "\n";
		} else {
			std::cout << min << "\n";
		}
	}

	return 0;
}
