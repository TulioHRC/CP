#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int res = 0;

	std::string a; std::cin >> a;
	int a_quant = 0;

	for (char c : a) {
		res++;

		if (c == 'A') a_quant++;
		else if (a_quant > 0) {res -= 2; a_quant--;}
		else a_quant = 0;
	}

	std::cout << res << "\n";

	return 0;
}
