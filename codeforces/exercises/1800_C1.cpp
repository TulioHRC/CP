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
ll aux, res;

void solve() {
	std::cin >> n;
	res = 0;

	std::priority_queue<ll> pq;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;

		if (aux == 0) {
			if (!pq.empty()) {
				res += pq.top();
				pq.pop();
			}
		} else {
			pq.push(aux);
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
