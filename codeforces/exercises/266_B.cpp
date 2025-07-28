#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n, t; std::cin >> n >> t;
	std::string queue; std::cin >> queue;

	int size = queue.size();

	for (int i = 0; i < t; i++){
		for (int j = 0; j < (size - 1); j++) {
			if (queue[j] == 'B' && queue[j+1] == 'G') {
				queue[j] = 'G';
				queue[j+1] = 'B';
				j++;
			}
		}
	}

	std::cout << queue << "\n";

	return 0;
}
