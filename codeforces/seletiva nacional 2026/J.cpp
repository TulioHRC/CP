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

int a, b, c;

void solve() {
	std::cin >> a >> b >> c;

	int raio = a + b + c;

	long double pi = 3.14159265359;

	long double area = raio * raio * pi;
	long double areaPerdida = 0;

	if (b + c < a) {
		areaPerdida += (a - b - c) * (a - b - c) * pi;
	}	
	
	if (a + b < c) {
		areaPerdida += (c - a - b) * (c - a - b) * pi;
	}
	if (a + c < b) {
		areaPerdida += (b - a - c) * (b - a - c) * pi;
	}

	// pi found https://en.cppreference.com/cpp/language/floating_literal

	std::cout << std::setprecision(39) << (area - areaPerdida) << "\n";
}

int main() { _
	solve();

	return 0;
}
