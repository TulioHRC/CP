#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t; std::cin >> t;
	std::string aux;
	int size, count;
	bool found;

	while (t--) {
		count = 0;
		found = false;
		std::cin >> aux;
		size = aux.size();
		for (int i = size - 1; i >= 0; i--){
			if (!found && aux[i] == '0') count++;
			else {
				if (!found) found = true;
				else if (aux[i] != '0') count++;
			}
		}
		std::cout << count << "\n";
	}

	return 0;
}
