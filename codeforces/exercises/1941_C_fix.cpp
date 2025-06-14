#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t, n;
	int count = 0;
	std::string aux;
	std::cin >> t;

	while(t--) {
		std::cin >> n >> aux;
		count = 0;
		
		for (int i = 0; i < (n - 2); i++){
			if (aux[i] == 'm' && aux[i+1] == 'a' && aux[i+2] == 'p') {
				if (i + 4 < n && aux[i+3] == 'i' && aux[i+4] == 'e') {
					count++;
					i += 4;
				} else {
					count++;
					i += 2;
				}
			}
			else if (aux[i] == 'p' && aux[i+1] == 'i' && aux[i+2] == 'e') {
				count++;
				i += 2;
			}
		}

		std::cout << count << '\n';
	}

	return 0;
}
