#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int n; std::cin >> n;
	std::vector<int> v;
	v.reserve(n);
	int aux;
	int sum = 0;
	while(n--) {
		std::cin >> aux;
		v.push_back(aux);
		sum += aux;
	}

	std::sort(v.begin(), v.end());
	std::reverse(v.begin(), v.end());

	int actualSum = 0;
	int count = 0;

	for (int num : v){
		count++;
		actualSum += num;

		if (actualSum > (sum / 2)) {
			std::cout << count << std::endl;
			break;
		}
	}

	return 0;
}
