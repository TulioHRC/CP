#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::set<std::string> ns;
	std::string j;

	while(std::cin >> j) {
		ns.insert(j);
	}

	std::cout << ns.size() << std::endl;

	return 0;
}
