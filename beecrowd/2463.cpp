#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int max = std::numeric_limits<int>::min();
	int actual = max;

	int n; std::cin >> n;

	int num;
	while(n--){
		std::cin >> num;
		if (num < 0) {
			if (num > actual) {
				actual = num;
			} else {
				if(actual - num > 0) {
					actual += num;
				}
			}
		} else {
			if (actual < 0) actual = num;
			else actual += num;
		}

		if(actual > max) max = actual;
	}

	std::cout << max << std::endl;

	return 0;
}
