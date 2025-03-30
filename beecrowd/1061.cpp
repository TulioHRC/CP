#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	std::string a;
	int d1, h1, m1, s1, d2, h2, m2, s2;

	// start
	std::cin >> a >> d1 >> h1;
	std::cin >> a >> m1;
	std::cin >> a >> s1;

	// end
	std::cin >> a >> d2 >> h2;
        std::cin >> a >> m2;
        std::cin >> a >> s2;
	
	int d, h, m, s;
	d = d2 - d1;
	if (h2 < h1) {
		d--;
		h = 24 + h2 - h1;	
	} else if (h2 == h1 && (m2 < m1 || (m2 == m1 && s2 < s1))) {
		d--;
		h = 24 + h2 - h1;
	} else {
		h = h2 - h1;
	}

	if (m2 < m1 || (m2 == m1 && s2 < s1)) {
		h--;
		m = m2 - m1 + 60;
	} else {
		m = m2 - m1;
	}

	if (s2 < s1) {
		m--;
		s = s2 - s1 + 60;
	} else {
		s = s2 - s1;
	}

	std::cout << d << " dia(s)\n";
	std::cout << h << " hora(s)\n";
	std::cout << m << " minuto(s)\n";
	std::cout << s << " segundo(s)\n";



	return 0;
}
