#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		std::vector<int> a(n);
		std::string s;

		for (int i = 0; i < n; i++) std::cin >> a[i];
		std::cin >> s;

		int first_L = -1;
		int last_R = -1;
		for (int i = 0; i < n; i++) {
			if (first_L == -1 && s[i] == 'L') first_L = i;
			if (s[i] == 'R') last_R = i;
		}
		
		int res = 0;
		if (first_L < last_R) {
			int sum = 0;
			bool L_in = false;
			for (int i = first_L + 1; i < last_R; i++) {
				if (L_in == false) {
					if (s[i] == 'L') {L_in = true; sum += a[i];}
				} else {
					sum += a[i];
					if (s[i] == 'R' && (s[i+1] == 'L' || i + 1 == last_R)) {res += sum; sum = 0; L_in = false;}
				}

				res += a[i];
			}

			res += a[first_L];
			res += a[last_R];
		} 

		std::cout << res << "\n";
	}

	return 0;
}
