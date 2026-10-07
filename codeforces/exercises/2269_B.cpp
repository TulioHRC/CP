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

ll operation(ll original) {
	ll newValue = 0;

	for (ll j = 1e10; j > 0; j /= 10) {
		newValue += (original / j) * (original / j);
		original -= (original / j) * j;
	}

	return newValue;
}

void solve(int t) {
	std::cin >> n;
	
	std::map<ll, std::pair<int, int>> num_per_turn_and_position;
	std::vector<ll> nums(n);
	std::vector<bool> can_advance(n, true);
	int tunes = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> nums[i];

		if (num_per_turn_and_position.find(nums[i]) != num_per_turn_and_position.end()) {
			can_advance[num_per_turn_and_position[nums[i]].s] = false;
			can_advance[i] = false;
			tunes++;
		}

		num_per_turn_and_position[nums[i]] = {0, i};
	}

	for (int i = 0; i < n; i++) {
		std::cout << nums[i] << " ";
	}
	std::cout << "\n";

	debug(t);

	debug(tunes);

	int i = 1;
	while (true) {
		int non_advancers = 0;

		for (int j = 0; j < n; j++) {
			if (can_advance[j] == false) {
				non_advancers++;
				continue;
			}

			ll old_num = nums[j];
			nums[j] = operation(nums[j]);

			debug(j);
			debug(old_num);
			debug(nums[j]);

			if (num_per_turn_and_position.find(nums[j]) != num_per_turn_and_position.end()) {
				int found_pos = num_per_turn_and_position[nums[j]].s;
				if (nums[found_pos] == nums[j] && can_advance[found_pos] == false) {
					non_advancers++;
					can_advance[found_pos] = false;
					tunes++;
				}
			} else if (nums[j] == old_num) non_advancers++;

			num_per_turn_and_position[nums[j]] = {i, j};
		}
		i++;

		if (non_advancers == n) break;
	}

	debug(tunes);

	std::cout << tunes << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve(t);
	}

	return 0;
}
