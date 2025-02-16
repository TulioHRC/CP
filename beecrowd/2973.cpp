#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int N, C, T;

bool possible(ll m, std::vector<int>& popcorns) {
	ll total_eaten = m * T;
	int actual_pop = 0;

	for(int actual_competitor = 0; actual_competitor < C; actual_competitor++){
		ll ate = 0;
		
		while(actual_pop < N && popcorns[actual_pop] <= (total_eaten - ate)) {
			ate += popcorns[actual_pop];
			actual_pop++;
		}
	} 

	if(actual_pop < N) return false;
	return true;
}

int main() { _
	std::cin >> N >> C >> T;

	std::vector<int> popcorns;
	popcorns.reserve(N);
	for(int i = 0; i < N; i++) {
		int aux; std::cin >> aux;
		popcorns.push_back(aux);
	}

	ll l = 0, r = 1e9 + 10;

	while(l < r) {
		ll m = (l + r) / 2;
		if(!possible(m, popcorns)) {
			l = m + 1;
		} else {
			r = m;
		}
	}

	std::cout << l << std::endl;

	return 0;
}
