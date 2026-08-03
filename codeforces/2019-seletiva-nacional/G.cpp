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
std::string P, S;
int p_size;

bool is_pattern(int start) {
	for (int i = 0; i < p_size; i++) {
		if (P[i] != '?' && P[i] != S[i + start]) {
			return false;
		}
	}
	return true;
}

void solve() {
	std::cin >> n >> m;
	std::cin >> P >> S;

	p_size = (int)P.size();

	std::set<std::string> setty;

	for (int i = 0; i <= (m - p_size); i++) {
		if (is_pattern(i)) {
			setty.insert(S.substr(i, p_size));
			//i += p_size - 1;
		}
	}

	std::cout << setty.size() << "\n";
}

int main() { _
	solve();

	return 0;
}
