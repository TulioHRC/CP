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

ll n;
std::vector<ll> a, b;

std::map<ll, bool> foi;
std::map<ll, int> respective_row;

void solve() {
	std::cin >> n;
	a.reserve(n);
	b.reserve(n);

	ll max = 0;

	ll aux;

	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		a.push_back(aux);
		foi[aux] = false;
		respective_row[aux] = 1;
	}

	for (int i = 0; i < n; i++) {
		std::cin >> aux;
		b.push_back(aux);
		foi[aux] = false;
		// check different rows
		if (respective_row.find(aux) != respective_row.end() && respective_row[aux] == 1) {
			foi[aux] = true;
			if (aux > max) max = aux;
		}
	}

	ll actual = 0;
	// a analysis
	for (int i = 0; i < n; i++) {
		if (foi[a[i]]) continue;

		if (actual == 0 && foi[a[i]] == false) { actual = a[i]; continue; }
			
		if (a[i] == actual) {
			foi[actual] = true;
			actual = 0;
		} else if (a[i] < actual) {
			max = a[i] > max ? a[i] : max;
			foi[a[i]] = true;
		} else {
			max = actual > max ? actual : max;
			foi[actual] = true;
			actual = a[i];
		}
	}
	
	actual = 0;
	// b analysis
	for (int i = 0; i < n; i++) {
		if (foi[b[i]]) continue;
		if (actual == 0 && foi[b[i]] == false) { actual = b[i]; continue; }
		
		if (b[i] == actual) {
			foi[actual] = true;
			actual = 0;
		} else if (b[i] < actual) {
			max = b[i] > max ? b[i] : max;
			foi[b[i]] = true;
		} else {
			max = actual > max ? actual : max;
			foi[actual] = true;
			actual = b[i];
		}
	}

	std::cout << max << "\n";
}

int main() { _
	solve();

	return 0;
}
