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

ll n, m;

void solve() {
	std::cin >> n >> m;

	std::vector<ll> subjects(n);
	std::vector<std::vector<ll>> matriculas_confirmadas(n);

	for (int i = 0; i < n; i++) {
		std::cin >> subjects[i];
		matriculas_confirmadas[i] = {};
	}
	ll x, k, aux;
	bool can;
	std::map<ll, std::vector<ll>> matriculas;

	for (int i = 0; i < m; i++) {
		can = true;

		std::cin >> x >> k;
		matriculas[x] = {};

		for (int j = 0; j < k; j++) {
			std::cin >> aux;
			matriculas[x].push_back(aux);
			if (subjects[aux - 1] > 0) continue;
			can = false;
		}

		if (can) {
			for (int j = 0; j < k; j++) {
				subjects[matriculas[x][j] - 1]--;
				matriculas_confirmadas[matriculas[x][j] - 1].push_back(x);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << matriculas_confirmadas[i].size() << " ";
		for (auto mat : matriculas_confirmadas[i]) {
			std::cout << mat << " ";
		}
		std::cout << "\n";
	}
}

int main() { _
	solve();

	return 0;
}
