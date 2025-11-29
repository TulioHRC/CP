#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

ll solve(std::vector<ll> &v, std::vector<ll> &b, int size, int k) {
	ll res = v[0];

	if (k % 2 == 0) {
		ll act = res;
		for (int i = 1; i < size; i++) {
			if (act < 0) act = v[i];
			else act += v[i];

			if (act > res) res = act;	
		}
	} else {
		ll act = res;
		ll actWithB = res + b[0];
		res = actWithB;
		
	       	for (int i = 1; i < size; i++) {
			//std::cout << act << " - " << actWithB << "\n";
			if (actWithB < 0) actWithB = v[i] + b[i];
			else actWithB += v[i];
			
			if (act < 0) {act = v[i];}
			else {act += v[i];}

			actWithB = act + b[i] > actWithB ? act + b[i] : actWithB;

			if (actWithB > res) res = actWithB;
		}
		//std::cout << act << " - " << actWithB << "\n";
	}

	return res;
}

int main() { _
	int t; std::cin >> t;

	while (t--) {
		int n, k; std::cin >> n >> k;
		std::vector<ll> v;
		std::vector<ll> b;
		v.reserve(n);
		b.reserve(n);

		ll aux;
		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			v.push_back(aux);
		}

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			b.push_back(aux);
		}

		std::cout << solve(v, b, n, k) << "\n";
	}

	return 0;
}
