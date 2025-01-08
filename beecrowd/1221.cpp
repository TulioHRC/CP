#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;
	ll aux;
	while(n--) {
		std::cin >> aux;
		ll a = (ll)std::sqrt(aux); 
		while(a > 1) {
			if(!(aux%a)){
				std::cout << "Not Prime" << std::endl;
				break;
			}
			a--;
		}

		if(a == 1) std::cout << "Prime" << std::endl;
	}

	return 0;
}
