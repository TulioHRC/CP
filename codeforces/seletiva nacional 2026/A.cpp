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

int a, b;

void solve() {
	std::cin >> a >> b;

	if (a > b) {
		std::cout << "El Cacto\n";
	} else if (a == b) {
		std::cout << "Empate\n";
	} else {
		std::cout << "WA\n";
	}
}

int main() { _
		solve();

	return 0;
}
