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

ll n, x, aux, aux2, free_strike, actual_strikes;
std::vector<ll> a(2e5);

void solve() {
	std::cin >> n >> x;
	ll biggest = 0;
	ll biggest_pos = -1;
	free_strike = 0;
	std::map<ll, ll> attacks_needed_blocks;

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];

		if (a[i] > biggest) {
			biggest = a[i];
			biggest_pos = i;
		}
	}

	ll last_attack = 0;

	for (int i = 0; i < n; i++) {
		if (biggest_pos == i) continue;

		aux = a[i];

		aux2 = aux / x;
		if (aux % x) aux2++;

		if (attacks_needed_blocks.find(aux2) != attacks_needed_blocks.end()) attacks_needed_blocks[aux2]++;
		else attacks_needed_blocks[aux2] = 1;

		if (aux2 > last_attack) last_attack = aux2;
	}

	ll cost = 0;
	ll actual = 0;

	for (auto i = attacks_needed_blocks.begin(); i != attacks_needed_blocks.end(); i++) {
		ll change = i->first - actual - 1;

		if (free_strike >= change) {
			free_strike -= change;
		} else {
			change -= free_strike;
			cost += change;
			free_strike = 0;
		}

		free_strike += i->second;
		actual = i->first - 1;
    }

	std::cout << cost << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
