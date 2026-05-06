#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

std::map<int, int> dsu;

void make_set(int a) {
	if (dsu.find(a) == dsu.end())
		dsu[a] = a;
}

int find_set(int a) {
	if (a == dsu[a]) return a;
	return find_set(dsu[a]);
}

void union_sets(int a, int b) {
	a = find_set(a);
	b = find_set(b);

	if (a < b) dsu[b] = a;
	else dsu[a] = b;
}

int main() { _
	int n, m; std::cin >> n >> m;
	
	// DSU
	int no_language = 0;

	int k, lang, last;
	for (int i = 0; i < n; i++) {
		std::cin >> k;
		last = -1;

		if (k == 0) no_language++;
		else {
			for (int j = 0; j < k; j++) {
				std::cin >> lang;
				make_set(lang);
				if (last != -1) {
					union_sets(lang, last);
				}
				last = lang;		
			}	
		}
	}

	std::set<int> s;
	for (const auto& [key, i] : dsu) {
		s.insert(find_set(i));
	}

	int res = no_language;
	if (s.size() > 0) res += s.size() - 1;

	std::cout << res << "\n";

	return 0;
}
