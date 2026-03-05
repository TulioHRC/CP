#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::vector<int> a;
	a.reserve(7);

	int aux;
	for (int i = 0; i < 7; i++) {
		std::cin >> aux;
		a.push_back(aux);
	}

	std::sort(a.begin(), a.end());

	int A, B, C;
	A = a[0];
	B = a[1];

	for (int i = 2; i < 6; i++) {
		if (A + B + a[i] == a[6]) {
			C = a[i];
		}
	}

	std::cout << A << B << C << "\n";

	return 0;
}
