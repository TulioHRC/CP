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

int n;

void solve() {
	std::cin >> n;

	bool has_one = false;
	int zero_qt = 0;

	int aux;
	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		
		if (aux == 0) zero_qt++;
		if (aux == 1) has_one = true;
	}

	if (zero_qt == 0) std::cout << "NO";
	else if (zero_qt == 1) std::cout << "YES";
	else if (has_one == true) std::cout << "YES";
	else std::cout << "NO";

	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
