#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

bool comp (int a, int b) {
  return a < b;
}

int main () { _
  int a, b; std::cin >> a >> b;
  std::vector<int> v;
  v.reserve(b);
  int aux;

  for (int i = 0;i < b; i++) {
    std::cin >> aux;
    v.push_back(aux);
  }

  std::sort(v.begin(), v.end(), comp);
  
  int best = v[a-1] - v[0];
  int maxI = b - a + 1;
  for (int i = 0; i < maxI; i++) {
    //std::cout << v[i] << " - " << v[i+a-1] << '\n';
    if (v[i + a - 1] - v[i] < best) best = v[i + a - 1] - v[i];
  }

  std::cout << best << "\n";

  return 0;
}
