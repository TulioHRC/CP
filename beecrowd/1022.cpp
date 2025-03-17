#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int mdc(int bigger, int smaller) {
	if (bigger == smaller) return bigger;
	else {
		bigger -= smaller;
		if (bigger < smaller) {
			int aux = bigger;
			bigger = smaller;
			smaller = aux;
		}
		return mdc(bigger, smaller);
	}
}

int main() { _
	int n; std::cin >> n;

	int a, b, c, d;
	int N1, D1;
	char op, aux;

	for(int i = 0; i < n; i++) {
		std::cin >> a >> aux >> b >> op >> c >> aux >> d;

		switch (op) {
			case '+':
				N1 = (a * d + c * b);
				D1 = (b * d);
				break;
			case '-':
				N1 = (a * d - c * b);
				D1 = (b * d);
				break;
			case '*':
				N1 = (a * c);
				D1 = (b * d);
				break;
			case '/':
				N1 = (a * d);
				D1 = (b * c);
				break;
		}

		int N1_a = N1 < 0 ? N1 * -1 : N1;
		int D1_a = D1 < 0 ? D1 * -1 : D1;
		int divider = mdc(std::max(N1_a, D1_a), std::min(N1_a, D1_a));

		std::cout << N1 << "/" << D1 << " = " << N1 / divider << "/" << D1 / divider << std::endl;
	}

	return 0;
}
