#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::string a; std::cin >> a;

	int count = 0;
	char act = 'a';
	bool d = false;

	for (char c : a) {
		if (c == act) count++;
		else {
			count = 1;
			act = c;
		}

		if(count == 7) {
			std::cout << "YES" << std::endl;
			d = true;
			break;
		}	
	}

	if (!d) std::cout << "NO" << std::endl;

	return 0;
}
