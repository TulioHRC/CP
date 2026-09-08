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
char c;

void solve() {
	std::cin >> n >> c;

	std::string str; std::cin >> str;

	if (c == 'g') { std::cout << 0 << "\n"; return; }
	
	int str_size = (int)str.size();

	std::vector<int> distance_to_g(str_size);

	int first_g = -1;

	// Find first g
	for (int i = 0; i < str_size; i++) {
		if (str[i] == 'g') {
			first_g = i;
			break;
		}
	}

	int i = first_g;
	int actual_distance = 0;

	// Fill distances to g
	do {
		if (i == 0) i = str_size - 1;
		else i--;

		actual_distance++;

		if (str[i] == 'g') {
			actual_distance = 0;
			continue;
		}

		distance_to_g[i] = actual_distance;
	} while (i != first_g);

	int max = 0;
	// Find maximum distance
	for (int i = 0; i < str_size; i++) {
		if (str[i] == c && distance_to_g[i] > max) max = distance_to_g[i]; 
	}

	std::cout << max << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
