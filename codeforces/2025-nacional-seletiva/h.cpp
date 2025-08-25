#include <bits/stdc++.h>

#define f first
#define s second

#define _ std::ios_base::sync_with_stdio(); std::cin.tie(0);

typedef long long ll;

int main() { _
    int n; std::cin >> n;

    std::set<std::string> already;
    std::string a;

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        already.insert(a);
    }

    std::string res(n, 'a');

    for (int a = -1; a < n; a++) {
        if (a == -1) {
            if (auto search = already.find(res); search == already.end()) {
                std::cout << res << "\n";
                return 0;
            }
        } else {
            res[a] = 'b';
            if (auto search = already.find(res); search == already.end()) {
                std::cout << res << "\n";
                return 0;
            }
            res[a] = 'a';
        }
    }

    return 0;
}
