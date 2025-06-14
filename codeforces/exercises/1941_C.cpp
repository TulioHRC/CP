#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	int t, n, count; std::cin >> t;
	std::string aux;
	
	std::vector<char> c(1e6);
	std::vector<int> q(1e6);

	while (t--) {
		count = 0;
		std::cin >> n >> aux;
		char actualChar = aux[0];
		int actualQ = 1;

		int actualPos = 0;

		for (int i = 1; i < n; i++){
			if(aux[i] == actualChar) {
				actualQ++;
			} else {
				c[actualPos] = actualChar;
				q[actualPos] = actualQ;
				actualChar = aux[i];
				actualQ = 1;
				actualPos++;
			}
		}
//		std::cout << "oi" << std::endl;
		if(aux[n-1] == actualChar) { actualQ++; }		
		else actualQ = 1;

		c[actualPos] = aux[n-1];
		q[actualPos] = actualQ;
		actualPos++;
			
		//std::cout << aux[n-1] << std::endl;

		for (int i = 0; i < (actualPos - 2); i++) {
		//	std::cout << c[i] << " " << q[i] << " " << c[i+1] << " " << c[i+2] << std::endl;
			if(c[i] == 'm' && c[i+1] == 'a' && c[i+2] == 'p') {
				if (i < (actualPos - 4) && c[i+3] == 'i' && c[i+4] == 'e') {
					int miniA = std::min(q[i], q[i+1]);
					int miniB = std::min(q[i+3], q[i+4]);
					count += std::min(miniA + miniB, q[i+2]);
					i += 4;
				} else {
					int mini = std::min(q[i], q[i+1]);
					mini = std::min(mini, q[i+2]);
					count += mini;
					i += 2;
				}
			} else if (c[i] == 'p' && c[i+1] == 'i' && c[i+2] == 'e') {
				int mini = std::min(q[i], q[i+1]);
				mini = std::min(mini, q[i+2]);
				count += mini;
				i += 2;
			} 
		}


		std::cout << count << std::endl;
	}

	return 0;
	}
