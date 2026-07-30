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

	std::map<std::pair<char, int>, int> mappy;

	int qtd = 0;
	char c;
	int color;
	for (int i = 0; i < n; i++) {
		std::cin >> c >> color;

		bool exist = mappy.find({c, color}) != mappy.end();

		if (!exist) mappy[{c, color}] = 0;

		// other pair exist and has
		if (
			mappy.find({(c == 'E' ? 'D' : 'E'), color}) != mappy.end() && 
			mappy[{(c == 'E' ? 'D' : 'E'), color}] > 0
		) {
			mappy[{(c == 'E' ? 'D' : 'E'), color}]--;
			qtd++;
		} else {
			mappy[{c, color}]++;
		}
	}

	std::cout << qtd << "\n";

	return 0;
}
