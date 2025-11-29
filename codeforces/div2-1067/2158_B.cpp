#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int getMap(std::map<int, int> mapp, int num) {
	if (mapp.find(num) != mapp.end()) return mapp[num];
	return 0;
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		int n; std::cin >> n;

		int size = n * 2;
		int aux;
		
		int res = 0;
		std::map<int, int> mapp;

		for (int i = 0; i < size; i++) {
			std::cin >> aux;
			int a = getMap(mapp, aux);
			mapp[aux] = a + 1;
		}
		int act = 0;
		bool has = false;
		for (auto it = mapp.begin(); it != mapp.end(); ++it) {
			if (it->second % 2 == 0) {
				if ((it->second / 2) % 2 != 0) res += 2;
				else if (it->second != (size - act)) {res += 2; has = true;}
				else if (has) res+= 2;
			} else res++;

			act += it->second;
		}

		std::cout << res << "\n";
	}

	return 0;
}
