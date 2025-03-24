#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int find(std::vector<int> &list, int to_find) {
	int i = 0;
	for(int a : list){
		if (a == to_find) return i;
	       i++;	
	}
	return -1;
}

int main() { _

	int marbles, queries;

	int c = 1;

	std::cin >> marbles >> queries;

	while(marbles != 0 && queries != 0){
		std::vector<int> list;

		list.reserve(marbles);	

		std::cout << "CASE# " << c << ":\n";
		
		int aux;
		for(int i = 0; i < marbles; i++){ std::cin >> aux; list.push_back(aux); };
		
		sort(list.begin(), list.end());

		for(int i = 0; i < queries; i++){
			std::cin >> aux;
			int found = find(list, aux);
			if(found == -1) {
				std::cout << aux << " not found\n";
			} else {
				std::cout << aux << " found at " << found + 1 << "\n";
			}
		}

		std::cin >> marbles >> queries;
		c++;
	}

	return 0;
}
