#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("mixmilk.in", "r", stdin);

	int ca, ma; std::cin >> ca >> ma;
	int cb, mb; std::cin >> cb >> mb;
	int cc, mc; std::cin >> cc >> mc;
	int aux;

	for (int i = 0; i < 100; i++) {
		if (i % 3 == 0) {
			aux = mb;
			mb = (ma + mb > cb) ? cb : ma + mb;
			ma = (ma + aux > cb) ? ma + aux - cb : 0;
		} else if (i % 3 == 1) {
			aux = mc;
			mc = (mb + mc > cc) ? cc : mb + mc;
			mb = (mb + aux > cc) ? mb + aux - cc : 0;
		} else {
			aux = ma;
			ma = (mc + ma > ca) ? ca : mc + ma;
			mc = (mc + aux > ca) ? mc + aux - ca : 0;
		}
	}

	freopen("mixmilk.out", "w", stdout);

	std::cout << ma << "\n";
	std::cout << mb << "\n";
	std::cout << mc << "\n";

	return 0;
}
