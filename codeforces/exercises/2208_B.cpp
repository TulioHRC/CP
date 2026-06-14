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

int n, k, p, m;

std::vector<std::pair<int, int>> cards(6e3); // initial Pos, cost

void solve() {
	int actual_cost = 0;

	std::cin >> n >> k >> p >> m;

	std::priority_queue<int, std::vector<int>, std::greater<int>> q;

	bool reached_win = false;
	int aux;
	int total_sum = 0;

	for (int i = 1; i <= n; i++) {
		std::cin >> aux;
		total_sum += aux;

		if (i == p) {
			actual_cost += aux;
			reached_win = true;
		}

		if (!reached_win) {
			q.push(aux);
			if ((int)q.size() >= k) {
				actual_cost += q.top();
				q.pop();
			}
		}

		cards[i] = {i, aux};
	}

	struct
    {
        bool operator()(std::pair<int, int> a, std::pair<int, int> b) const { return a.s < b.s; }
    }
    customLess; // ASC

	std::sort(cards.begin() + 1, cards.begin() + n + 1, customLess);

	int threshold = n - k + 1;
	for (int i = n; i > threshold; i--) {
		if (cards[i].f == p) {
			threshold = threshold == 0 ? 0 : threshold - 1;
		} else {
			total_sum -= cards[i].s;
		}
	}

	int res = 0;

	if (actual_cost <= m) {
		res++;
		res += (m - actual_cost) / total_sum;
	}

	std::cout << res << std::endl;
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
