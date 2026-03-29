#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

std::vector<std::vector<int>> graph(201, std::vector<int>(1001));

int getSizeOfChildren(int parent, int look) {
	for (int a : graph[look]) {
	    if (a == parent) continue;
		return graph[a].size();
	}
	return 0;
}

int main() { _
	int t; std::cin >> t;

	int n, m; // vertices and edges
	int x, y; // > 1
	int aux1, aux2;
	while(t--) {
		std::cin >> n >> m;

		for (int i = 0; i < n; i++) {
			graph[i+1] = {};
		}

		for (int i = 0; i < m; i++) {
			std::cin >> aux1 >> aux2;

			graph[aux1].push_back(aux2);
			graph[aux2].push_back(aux1);
		}

		for (int i = 0; i < n; i++) {
			if (graph[graph[i + 1][0]].size() > 1 && getSizeOfChildren(i + 1, graph[i+1][0]) == 1 && graph[i+1].size() > 1) {
				x = graph[i+1].size();
				y = graph[graph[i+1][0]].size() - 1;
			}
		}

		std::cout << x << " " << y << "\n";
	}

	return 0;
}
