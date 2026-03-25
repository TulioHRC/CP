#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

std::vector<std::vector<char>> mat(1e3 + 2, std::vector<char>(1e3 + 2));

int check(int n, int m, int i, int j, char next) {
	int side; // 0(right), 1(down), 2(left) or 3(up)

	int layer = std::min({i, j, m - j - 1, n - i - 1});
	// std::cout << layer << " layer" << std::endl;

	if (i == j && i == layer) {
		side = 0;
	} else if (n - i == m - j && m - j - 1 == layer) {side = 2;}
	else if (i == m - j - 1 && i == layer) {side = 1;}
	else if (n - i - 1 == j && j == layer) {side = 3;}
	else {
		// no border
		int minSide = m - j - 1;
		side = 1;
		for (int sideOption = 1; sideOption < 4; sideOption++) {
			// std::cout << "actual side " << side << " - min side " << minSide << std::endl;
			switch (sideOption)
			{
			case 1:
				if (minSide > (n - i - 1)){
					side = 2;
					minSide = n - i - 1;
				}
				break;
			case 2:
				if (minSide > j){
					side = 3;
					minSide = j;
				}
				break;
			case 3: 
				if (minSide > i){
					side = 0;
					minSide = i;
				}
				break;
			
			default:
				break;
			}
		}
	}

	// std::cout << i << " " << j << " - " << next << " " << side << std::endl;

	switch (side) {
		case 0: 
			if (mat[i][j+1] == next) {
				return next == '5' ? check(n, m, i, j+1, '4') : (next == '4' ? check(n, m, i, j+1, '3') : 1);
			}
			break;
		case 1: 
			if (mat[i+1][j] == next) {
				return next == '5' ? check(n, m, i+1, j, '4') : (next == '4' ? check(n, m, i+1, j, '3') : 1);
			}
			break;
		case 2: 
			if (mat[i][j-1] == next) {
				return next == '5' ? check(n, m, i, j-1, '4') : (next == '4' ? check(n, m, i, j-1, '3') : 1);
			}
			break;
		case 3: 
			if (mat[i-1][j] == next) {
				return next == '5' ? check(n, m, i-1, j, '4') : (next == '4' ? check(n, m, i-1, j, '3') : 1);
			}
			break;
	}

	return 0;
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n, m; std::cin >> n >> m;

		int qtd = 0;
		std::string aux;

		for (int i = 0; i < n; i++) {
			std::cin >> aux;
			for (int j = 0; j < m; j++) {
				mat[i][j] = aux[j];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (mat[i][j] == '1') {
					qtd += check(n, m, i, j, '5');
				}
			}
		}

		std::cout << qtd << "\n";
	}

	return 0;
}
