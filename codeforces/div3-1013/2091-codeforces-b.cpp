#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	ll n, x;
	ll aux;
	while(t--) {
		std::cin >> n >> x;

		std::vector<ll> heap;
		heap.reserve(n);

		//std::make_heap(heap.begin(), heap.end());

		while(n--){
			std::cin >> aux;
			heap.push_back(aux);
			//std::push_heap(heap.begin(), heap.end());
		}

		std::sort(heap.begin(), heap.end());

		int count = 0;
		int acc = 0;

		for(auto i = heap.size(); i > 0; i--){
			acc++;
			//std::cout << acc << ", " << heap[i-1] << "\n";
			if(acc * heap[i-1] >= x){
				count++;
				acc = 0;
			}
		}

		std::cout << count << "\n";
	}

	return 0;
}
