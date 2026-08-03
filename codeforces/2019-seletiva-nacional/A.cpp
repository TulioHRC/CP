#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

template <typename T>
void debug_func(T var, std::string var_name) {
	std::cout << var_name << ": " << var << std::endl;
}

#define debug(x) debug_func(x, #x)

#define f first
#define s second

typedef long long ll;


void solve() {
	int xo1, x1, yo1, y1;
	int xo2, x2, yo2, y2;

	std::cin >> xo1 >> x1 >> yo1 >> y1;
	std::cin >> xo2 >> x2 >> yo2 >> y2;

	int area1 = (x1 - xo1) * (y1 - yo1);
	int area2 = (x2 - xo2) * (y2 - yo2);

	int interceptionArea = 0;


	// if x-axis intercepts
	if ((xo2 >= xo1 && xo2 <= x1) || (x2 >= xo1 && x2 <= x1) || (yo2 >= yo1 && yo2 <= y1) || (y2 >= yo1 && y2 <= y1)) {
			interceptionArea = (std::min(x1, x2) - std::max(xo1, xo2)) * (std::min(y1, y2) - std::max(yo1, yo2));
	}


	std::cout << (interceptionArea > 0 ? area1 + area2 - interceptionArea : area1 + area2) << "\n";
}

int main() { _
	solve();

	return 0;
}
