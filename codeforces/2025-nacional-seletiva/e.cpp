#include <bits/stdc++.h>

#define f first
#define s second

#define _ std::ios_base::sync_with_stdio(); std::cin.tie(0);

int main() { _
    int p, k; std::cin >> p >> k;
    std::vector<int> plats(p + 1, 0); // 0 nothing, 1 toxic, 2 antidote

    int m; std::cin >> m;
    int aux;
    while(m--) {
        std::cin >> aux;
        plats[aux] = 1;
    }

    int n; std::cin >> n;
    while(n--) {
        std::cin >> aux;
        plats[aux] = 2;
    }

    int actual = p;
    int safespot = p;
    while (actual >= 0) {
        if(plats[actual] == 1) {
            if (safespot < actual) {
                actual = safespot;
                continue;
            }
            std::cout << "Nao\n";
            return 0;
        }
        else if(plats[actual] == 2 || plats[actual - k] == 2 || actual == 0) {
            std::cout << "Sim\n";
            return 0;
        } else {
            if(plats[actual - 1] == 1 && actual >= k && plats[actual-k] == 0) {
                actual -= k;
            } else {
                safespot = (actual >= k && plats[actual-k] == 0) ? actual-k : safespot;
                actual--;
            }
        }
    }

    std::cout << "Nao\n";

    return 0;
}
