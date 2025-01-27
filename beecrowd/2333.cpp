#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	ll n; std::cin >> n;
	ll aux;
	ll actualGroup = 0;
	std::vector<ll> groups;
	groups.push_back(0);

	for (ll i = 0; i < n; i++) {
		std::cin >> aux;
		if(aux > 0 && groups[actualGroup] < 0){
			actualGroup++;
			groups.push_back(aux);
		} else if (aux > 0) {
			groups[actualGroup] += aux;
		} else if (groups[actualGroup] < 0) {
			groups[actualGroup] += aux;
		} else {
			actualGroup++;
			groups.push_back(aux);
		}
	}

	ll max = 0;
	ll actual = 0;
	ll pos = 0;

	for (ll i = 0; i <= actualGroup; i++) {
		if(groups[i] >= 0) actual += groups[i];
		else {
			if(actual > max) max = actual;
			if(actual + groups[i] > 0) actual += groups[i];
			else {
				actual = 0;
				pos = i;
			}
		}
	}

	ll i = 0;

	while (i < pos) {
		if(groups[i] >= 0) actual += groups[i];
		else {
			if(actual > max) max = actual;
			if (actual + groups[i] > 0) actual += groups[i];
			else {
				break;
				//std::cout << max << std::endl;
				//return 0;
			}
		}	
		i++;
	}

	if(actual > max) max = actual;

	std::cout << max << std::endl;

	return 0;
}
