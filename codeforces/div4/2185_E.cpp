#include <bits/stdc++.h>
#include <climits>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	std::vector<std::pair<ll, ll>> distances_to_spikes(3 * 1e5);
	
	while(t--) {
		int n, m, k; std::cin >> n >> m >> k;
		
		std::vector<bool> alive(n, true);
		std::vector<ll> robots;
		robots.reserve(n);

		std::vector<ll> spikes;
		spikes.reserve(m + 1);

		ll aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			robots.push_back(aux);
		}

		for (int i = 0; i < m; i++) {
			std::cin >> aux;
			spikes.push_back(aux);
		}

		std::sort(robots.begin(), robots.end());
		std::sort(spikes.begin(), spikes.end());

		spikes.push_back(LLONG_MAX);

		std::string command; std::cin >> command;

		std::map<ll, std::vector<int>> killed;
		int spike_interval = 0;
		for (int i = 0; i < n; i++) {
			if (robots[i] < spikes[spike_interval]) {
				//distances_to_spikes[i] = {LLONG_MAX,  spikes[spike_interval] - robots[i]};
				if (killed.find(spikes[spike_interval] - robots[i]) == killed.end()) killed[spikes[spike_interval] - robots[i]] = {};
				killed[spikes[spike_interval] - robots[i]].push_back(i);
			} else {
				while (robots[i] > spikes[spike_interval + 1]) spike_interval++;
				//distances_to_spikes[i] = {robots[i] - spikes[spike_interval],  spikes[spike_interval + 1] - robots[i]};
				if (killed.find(spikes[spike_interval + 1] - robots[i]) == killed.end()) killed[spikes[spike_interval + 1] - robots[i]] = {};
				killed[spikes[spike_interval + 1] - robots[i]].push_back(i);

				if (killed.find(spikes[spike_interval] - robots[i]) == killed.end()) killed[spikes[spike_interval] - robots[i]] = {};
				killed[spikes[spike_interval] - robots[i]].push_back(i);
			}

			//std::cout << i << " - " << distances_to_spikes[i].f << " -> " << distances_to_spikes[i].s << '\n';
		}


		int remaining = n;
		ll actual = 0;
		for (char c : command) {
			if (c == 'R') {
				actual++;
			} else {
				actual--;
			}

			if (killed.find(actual) != killed.end()) 
				for (int i : killed[actual]) {
					if (!alive[i]) continue;

					remaining--;
					alive[i] = false;
					killed[actual] = {};
				}

			std::cout << remaining << " ";
		}
		std::cout << "\n";		
	}

	return 0;
}
