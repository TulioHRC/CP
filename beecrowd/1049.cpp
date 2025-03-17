#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::string a, b, c; std::cin >> a >> b >> c;

	if (a == "vertebrado") {
	    if (b == "ave") {
		if (c == "carnivoro") {
		    std::cout << "aguia" << std::endl;
		} else if (c == "onivoro") {
		    std::cout << "pomba" << std::endl;
		}
	    } else if (b == "mamifero") {
		if (c == "herbivoro") {
		    std::cout << "vaca" << std::endl;
		} else if (c == "onivoro") {
		    std::cout << "homem" << std::endl;
		}
	    }
	} else if (a == "invertebrado") {
	    if (b == "inseto") {
		if (c == "hematofago") {
		    std::cout << "pulga" << std::endl;
		} else if (c == "herbivoro") {
		    std::cout << "lagarta" << std::endl;
		}
	    } else if (b == "anelideo") {
		if (c == "hematofago") {
		    std::cout << "sanguessuga" << std::endl;
		} else if (c == "onivoro") {
		    std::cout << "minhoca" << std::endl;
        	}
    	    }
	}

	return 0;
}
