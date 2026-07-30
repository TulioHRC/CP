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

std::string string;
int q, ct, string_size;

bool is_beauty(int start_pos) {
	if (start_pos >= (string_size - 3.)) return false;
	if (
		string[start_pos] == '1' &&
		string[start_pos + 1] == '1' &&
		string[start_pos + 2] == '0' &&
		string[start_pos + 3] == '0'
	) {
		return true;
	}
	return false;
}

void solve() {
	std::cin >> string >> q;

	string_size = (int)string.size();
	ct = 0;

	for (int i = 0; i < (string_size - 3); i++) {
		if (is_beauty(i)) {
			ct++;
		}
	}

	int i;
	char v;

	for (int j = 0; j < q; j++) {
		std::cin >> i >> v;

		// Reduce to make it easier to understand
		i--;

		// No change
		if(string[i] == v) {
			std::cout << (ct > 0 ? "YES" : "NO") << "\n";
			continue;
		}

		// Before any changes (if it's removing a beauty)
		if(
			is_beauty(i) ||
			(i > 0 && is_beauty(i - 1)) ||
			(i > 1 && is_beauty(i - 2)) ||
			(i > 2 && is_beauty(i - 3))
		) {
			ct--;
		}

		// After changes
		string[i] = v;
		if(
			is_beauty(i) ||
			(i > 0 && is_beauty(i - 1)) ||
			(i > 1 && is_beauty(i - 2)) ||
			(i > 2 && is_beauty(i - 3))
		) {
			ct++;
		}

		std::cout << (ct > 0 ? "YES" : "NO") << "\n";
	}
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
