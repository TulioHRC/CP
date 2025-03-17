#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;

	int a, b, aux;

	for (int i = 0; i < n; i++){
		// get mdc
		std::cin >> a >> b;
		aux = std::max(a, b);
		b = std::min(a, b);
		a = aux;
			
		while (a != b) {
			a -= b;
			if (a < b) {
				aux = a;
				a = b;
				b = aux;
			}	
		}

		std::cout << a << std::endl;
	}

	return 0;
}
