#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::map<int, std::string> ddd = {
		{61, "Brasilia"},
		{71, "Salvador"},
		{11, "Sao Paulo"},
		{21, "Rio de Janeiro"},
		{32, "Juiz de Fora"},
		{19, "Campinas"},
		{27, "Vitoria"},
		{31, "Belo Horizonte"}
	};

	int i; std::cin >> i;
	auto search = ddd.find(i);

	if(search != ddd.end()) {
		std::cout << search->second << std::endl;
	} else {
		std::cout << "DDD nao cadastrado" << std::endl;
	}

	return 0;
}
