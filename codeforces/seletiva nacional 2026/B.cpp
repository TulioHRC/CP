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

int n, m;

void solve() {
	std::cin >> n >> m;

	bool can = true;
	char aux;
	std::pair<int, int> pos = {0, 0};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> aux;

			if (aux == '#' && (pos.f != i || pos.s != j)) {
				if (pos.f == i - 1 && pos.s == j) pos = {i, j};
				else if (pos.f == i && pos.s == j - 1) pos = {i, j};
				else can = false;
			}
		}
	}

	std::cout << (can ? "Possivel" : "Impossivel") << "\n";
}

int main() { _
	solve();

	return 0;
}
