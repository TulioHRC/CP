#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::string text; std::getline(std::cin, text);
	std::string newText = "";

	for (char c : text) {
		newText.push_back(c - 9);
	}

	std::cout << newText << std::endl;

	return 0;
}
