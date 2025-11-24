#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int t_counter(std::string text, int index) {
	int count = 0;
	while (text[index] == 'T') {
		count++;
		index++;
	}
	return count;
}

int main() { _
	int t; std::cin >> t;

	while (t--) {
		std::string text;
		std::cin >> text;

		std::sort(s.begin(), s.end());		

		std::cout << text << "\n";
	}

	return 0;
}
