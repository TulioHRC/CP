#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float a;

	int count = 0;
	for(int i = 0; i < 6; i++){
		std::cin >> a;
		if(a > 0) count++;
	}

	std::cout << count << " valores positivos" << std::endl;

	return 0;
}
