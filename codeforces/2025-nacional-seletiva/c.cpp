#include <bits/stdc++.h>
    
#define f first
#define s second
    
#define _ std::ios_base::sync_with_stdio(); std::cin.tie(0);
    
typedef long long ll;
    
int main() { _
    ll w; std::cin >> w;
    ll n; std::cin >> n;
    
    ll totalArea = 0;
    ll wi, li;
    for (int i = 0; i < n; i++) {
        std::cin >> wi >> li;
        totalArea += wi * li;
    }
    
    std::cout << (totalArea / w) << "\n";
    
    return 0;
}