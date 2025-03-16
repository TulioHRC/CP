#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	double a, b, c; std::cin >> a >> b >> c;

	std::vector<double> v(3);

	if(a >= b && a >= c) v = {a, b, c};
        else if (b >= c) v = {b, a, c};
	else v = {c, a, b};

	if (v[0] >= v[1] + v[2]) {std::cout << "NAO FORMA TRIANGULO" << std::endl; return 0;}
	if (v[0] * v[0] == v[1] * v[1] + v[2] * v[2]) std::cout << "TRIANGULO RETANGULO" << std::endl;
	if (v[0] * v[0] > v[1] * v[1] + v[2] * v[2]) std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
	if (v[0] * v[0] < v[1] * v[1] + v[2] * v[2]) std::cout << "TRIANGULO ACUTANGULO" << std::endl;
	if (v[0] == v[1] && v[1] ==  v[2]) std::cout << "TRIANGULO EQUILATERO" << std::endl;
	else if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2]) std::cout << "TRIANGULO ISOSCELES" << std::endl;

	return 0;
}
