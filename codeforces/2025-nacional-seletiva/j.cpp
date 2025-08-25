#include <bits/stdc++.h>
    
#define f first
#define s second
    
#define _ std::ios_base::sync_with_stdio(); std::cin.tie(0);
    
typedef long long ll;
    
int main() { _
    int t; std::cin >> t;
    
    ll n, max, aux, sum;
    while(t--) {
        max = 0;
        sum = 0;
        std::cin >> n;
        while (n--) {
            std::cin >> aux;
            max = aux > max ? aux : max;
            sum += aux;
        }
        sum -= max;

        if (sum >= (max - 1)) {
            std::cout << sum + max << "\n";
        } else {
            std::cout << 2 * sum + 1 << "\n";
        }
    }
    
    return 0;
}