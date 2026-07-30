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
	int a, b;
	std::cin >> a >> b;

	if (a > b) {
		std::cout << "Guida\n";
	} else if (b > a) {
		std::cout << "Guido\n";
	} else {
		std::cout << "Empate\n";
	}

	return 0;
}
