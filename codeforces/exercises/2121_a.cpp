#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	int n, s;

	int min, max, aux;

	while (t--) {
		std::cin >> n >> s;
		if (n == 1) {
			std::cin >> aux;
			min = aux;
			max = aux;
		} else {	
			std::cin >> min;n--;n--;
			while(n--) {
				std::cin >> aux;
			}
			std::cin >> max;
		}

		if (s > max) {
			std::cout << s - min << std::endl; 
		} else if (s < min) {
			std::cout << max - s << std::endl;
		} else {
			if ((max - s) > (s - min)) {
				std::cout << s - min + max - min << std::endl;
			} else {
				std::cout << max - s + max - min << std::endl;
			}
		}
	}

	return 0;
}
