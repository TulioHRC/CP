#include <algorithm>
#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

int main() { _
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	int n; std::cin >> n;

	std::vector<std::pair<int, int>> incidents; // time - bucketId
	incidents.reserve(n);

	std::vector<int> buckets;
	buckets.reserve(n);

	int a, b, c;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b >> c;
		incidents.push_back({a, i}); // start
		incidents.push_back({b, i}); // end
		buckets.push_back(c);
	}

	struct
    {
        bool operator()(std::pair<int, int> a, std::pair<int, int> b) const { return a.f < b.f; }
    }
    customLess;
	std::sort(incidents.begin(), incidents.end(), customLess);

	int actual_buckets = 0;
	int max_buckets = 0;

	std::vector<bool> used(n, false);

	for (std::pair<int, int> a : incidents) {
		if (used[a.s] == false) {
			actual_buckets += buckets[a.s];
			used[a.s] = true;
			max_buckets = actual_buckets > max_buckets ? actual_buckets : max_buckets;
		} else {
			actual_buckets -= buckets[a.s];
		}
	}

	std::cout << max_buckets << "\n";

	return 0;
}
