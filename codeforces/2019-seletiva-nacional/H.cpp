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

	std::set<int> setty;

	bool res = false;
	int aux;
	for (int i = 0; i < n; i++) {
		std::cin >> aux;

		if (setty.find(aux) != setty.end()) {
			res = true;
		} else {
			setty.insert(aux);
		}
	}

	std::cout << (res ? 'S' : 'N') << "\n";

	return 0;
}
