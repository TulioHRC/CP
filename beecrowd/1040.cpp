#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	float a, b, c, d; std::cin >> a >> b >> c >> d;

	float av = (a * 2 + b * 3 + c * 4 + d)/10.0;
	
	std::cout.precision(1);
	std::cout << std::fixed;
	std::cout << "Media: " << av << std::endl;

	if(av < 5) {
		std::cout << "Aluno reprovado." << std::endl;
	} else if (av < 7) {
		float newNote; std::cin >> newNote;
		std::cout << "Aluno em exame." << std::endl;
		std::cout << "Nota do exame: " << newNote << std::endl;
		float newAv = (av + newNote)/2.0;

		if (newAv >= 5) {
			std::cout << "Aluno aprovado." << std::endl;
		} else {
			std::cout << "Aluno reprovado." << std::endl;
		}

		std::cout << "Media final: " << newAv << std::endl;
	} else {
		std::cout << "Aluno aprovado." << std::endl;
	}


	return 0;
}
