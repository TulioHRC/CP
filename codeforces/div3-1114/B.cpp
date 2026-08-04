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
std::string s;

void solve() {
	std::cin >> n >> s;
	
	std::vector<std::pair<char, int>> sub = {{s[0], 1}};
	int sub_actual = 0;

	for (int i = 1; i < n; i++) {
		if (s[i] == sub[sub_actual].f) sub[sub_actual].s++;
		else {
			sub_actual++;
			sub.push_back({s[i], 1});
		}
	}

	int bestReduction = 0;

	for (int i = 1; i < sub_actual; i++) {
		if (sub[i-1].f == sub[i+1].f && sub[i].s == 1) {
			bestReduction = 2;
			break;
		} else if (sub[i].s == 1) {
			bestReduction = 1;
		}
	}

	std::cout << (sub_actual + 1 - bestReduction) << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
