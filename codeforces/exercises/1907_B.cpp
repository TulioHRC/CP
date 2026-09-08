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


void solve() {
	std::string str;

	std::cin >> str;
	
	int size = (int)(str.size());

	int lowers_count = 0;
	int uppers_count = 0;

	std::vector<std::pair<int, char>> lowers(size);
	std::vector<std::pair<int, char>> uppers(size);

	for (int i = 0; i < size; i++) {
		if (str[i] == 'b') {
			if (lowers_count > 0) lowers_count--;
			continue;
		}

		if (str[i] == 'B') {
			if (uppers_count > 0) uppers_count--;
			continue;
		}

		if (str[i] >= 97) {
			lowers[lowers_count] = {i, str[i]};
			lowers_count++;
		} else {
			uppers[uppers_count] = {i, str[i]};
			uppers_count++;
		}
	}

	int lower_i = 0;
	int upper_i = 0;
	std::string res;
	res.reserve(size);

	while(lower_i < lowers_count || upper_i < uppers_count) {
		if (lower_i < lowers_count && upper_i < uppers_count) {
			if (lowers[lower_i].f < uppers[upper_i].f) {
				res.push_back(lowers[lower_i].s);
				lower_i++;
			} else {
				res.push_back(uppers[upper_i].s);
				upper_i++;
			}
		} else if (lower_i < lowers_count) {
			res.push_back(lowers[lower_i].s);
			lower_i++;
		} else {
			res.push_back(uppers[upper_i].s);
			upper_i++;
		}
	}
	
	std::cout << res << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
