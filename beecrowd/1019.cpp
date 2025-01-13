#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;
	int h = n/3600;
	n %= 3600;
	int m = n/60;
	n %= 60;
	int s = n;

	std::cout << h << ":" << m << ":" << s << std::endl;

	return 0;
}
