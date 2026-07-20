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

std::string n;

void solve() {
	std::cin >> n;

	char actual = '0';
	std::string newN;
	newN.reserve(n.size());

	for (char c : n) {
		if (c == '?') {
			newN.push_back(actual);
		} else {
			newN.push_back(c);
			actual = c;
		}
	}

	std::cout << newN << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
