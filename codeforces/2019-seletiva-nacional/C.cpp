#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

template <typename T>
void debug_func(T var, std::string var_name) {
	std::cout << var_name << ": " << var << std::endl;
}

#define debug(x) debug_func(x, #x)

#define f first
#define s second

typedef long long ll;


int main() { _
	int n; std::cin >> n;

	char aux;
	int qtd = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;

		if (aux == '1') qtd++;
	}

	std::cout << (qtd % 2 == 1 ? 'S' : 'N') << "\n";

	return 0;
}
