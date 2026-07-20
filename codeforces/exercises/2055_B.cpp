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
ll aux;
std::vector<ll> a(3e5);

void solve() {
	std::cin >> n;

	bool can = true;
	
	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		a[i] = aux;
	}
	
	ll closest = -1;
	int lesser = 0;
	ll lessest = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;

		if (closest == -1 && a[i] - aux >= 0) {
			closest = a[i] - aux;
		} else if (a[i] - aux >= 0 && closest > a[i] - aux) {
			closest = a[i] - aux;
		}

		if (a[i] < aux) {
			lesser++;
			lessest = aux - a[i] > lessest ? aux - a[i] : lessest;
		}
	}

	if (lesser > 1) can = false;
	if (lessest > closest) can = false;

	std::cout << (can ? "YES" : "NO") << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
