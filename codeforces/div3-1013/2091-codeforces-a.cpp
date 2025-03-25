#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	
	int n;
	while(t--) {
		std::cin >> n;
		
		int count = 8;
		std::map<int, int> remaining = {
			{0, 3},
			{1, 1},
			{2, 2},
			{3, 1},
			{4, 0},
			{5, 1},
			{6, 0},
			{7, 0},
			{8, 0},
			{9, 0}
		};
		
		int res = 0;
		int aux;
		for(int i = 0; i < n; i++){
			std::cin >> aux;
			if (remaining[aux] > 0) {
				count--;
				remaining[aux]--;
				if(count == 0) {
					res = i + 1;
				}
			}
		}

		std::cout << res << "\n";
	}

	return 0;
}
