#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

ll n;
bool exists;
std::pair<ll, ll> res;
ll i, num;

bool is_palindrome(ll number) {
	std::string s = std::to_string(number);
	int l = 0;
	int r = (int)s.size() - 1;

	while (l < r) {
		if (s[l] != s[r]) return false;

		l++;
		r--;
	}

	return true;
}

void solve() {
	std::cin >> n;
	exists = false;

	i = n / 12;
	num = 12 * i;

	while(exists == false && num <= n && i >= 0) {
		num = 12 * i;
		if (is_palindrome(n - num)) {
			exists = true;
			res = {n - num, num};
		}

		i--;
	}

	if (exists) {
		std::cout << res.f << " " << res.s;
	} else {
		std::cout << -1;
	}
	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
