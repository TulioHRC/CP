#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

// Uses DSU to identify convex nodes on the graph

struct DSU {
	std::vector<int> parent, size;

	DSU(int n) {
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for (int i = 1; i <= n; i++) parent[i] = i;
	}

	int find(int x) {
		if (parent[x] == x) return x;
		return find(parent[x]);
	}

	void unite(int a, int b) {
		a = find(a);
		b = find(b);

		if (a != b) {
			if (size[a] < size[b]) std::swap(a, b);
			parent[b] = a;
			size[a] += size[b];
		}
	}
};

int main() { _
	int n, m; std::cin >> n >> m;

	std::vector<std::pair<int, int>> newRoads(n + 1);
	for (int i = 1; i < n; i++) {
		std::cin >> newRoads[i - 1].f >> newRoads[i - 1].s;
	}

	std::set<std::pair<int, int>> oldRoads;

	int x, y;
	for (int i = 0; i < m; i++) {
		std::cin >> x >> y;
		if (x > y) std::swap(x, y);
		oldRoads.insert({x, y});
	}

	DSU dsu(n);

	for (auto [a, b] : newRoads) {
		if (a > b) std::swap(a, b);
		if (oldRoads.count({a, b})) {
			dsu.unite(a, b);
		}
	}

	std::unordered_map<int, ll> comp;

	for (int i = 1; i <= n; i++) {
		comp[dsu.find(i)]++;
	}

	ll ans = 0;
	for (auto [index, size] : comp) {
		ans += size * size;
	}

	std::cout << ans << "\n";

	return 0;
}
