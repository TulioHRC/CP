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

ll n,m,q;
std::vector<ll> teacher_positions(3e5);

void solve() {
	std::cin >> n >> m >> q;
	
	for (int i = 0; i < m; i++) {
		std::cin >> teacher_positions[i];
	}

	std::sort(teacher_positions.begin(), teacher_positions.begin() + m);

	for (int i = 0; i < q; i++) {
		ll query;
		std::cin >> query;

		ll res = 0;
		
		if (query > teacher_positions[0]) {
			if (query > teacher_positions[1]) {
				res = n - query + query - teacher_positions[1];
			} else if (query < teacher_positions[1]) {
				res = (teacher_positions[1] - teacher_positions[0]) / 2; 
			}
		} else if (query < teacher_positions[0]) {
			res = query - 1 + teacher_positions[0] - query;
		}

		std::cout << res << "\n";
	}
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
