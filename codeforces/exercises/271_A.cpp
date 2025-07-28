#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int i; std::cin >> i;
	i++;

	while (true) {
		int thousand = i / 1000;
		int hundred = (i - thousand * 1000) / 100;
		int decimal = (i - thousand * 1000 - hundred * 100) / 10;
		int unit = (i - thousand * 1000 - hundred * 100 - decimal * 10) / 1;
		if ( thousand != hundred && thousand != decimal && thousand != unit && hundred != decimal && hundred != unit && decimal != unit) {
			std::cout << i << "\n";
			return 0;
		}
		i++;
	}

	return 0;
}
