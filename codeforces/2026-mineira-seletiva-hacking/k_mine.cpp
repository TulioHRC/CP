    #include <bits/stdc++.h>
     
    #define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);
     
    #define f first
    #define s second
     
    typedef long long ll;
     
    struct City {
        std::vector<int> connections;
        int group;
    };
     
    std::vector<City> nodes(3e5, {{}, -1});
     
    ll group_count(int group, int actualNode) {
        ll res = 1;
        for (int conn : nodes[actualNode].connections) {
            if (nodes[conn].group == -1) {
                nodes[conn].group = group;
                res += group_count(group, conn);
            }
        }
        return res;
    }
     
    int main () { _
        int n, m; std::cin >> n >> m;
     
        std::set<std::pair<int, int>> new_roads;
     
        int x, y;
        for (int i = 0; i < (n - 1); i++) {
            std::cin >> x >> y;
            x--;
            y--;
            if (x > y) std::swap(x, y);
            new_roads.insert({x, y});
        }
     
        for (int i = 0; i < m; i++) {
            std::cin >> x >> y;
            x--;
            y--;
            if (x > y) std::swap(x, y);
     
            if (new_roads.count({x, y})) {
                nodes[x].connections.push_back(y);
                nodes[y].connections.push_back(x);
            }
        }
     
        int actualGroup = 0;
        ll connections = 0;
        ll res = n;
        for (int i = 0; i < n; i++) {
            if (nodes[i].group == -1) {
                nodes[i].group = actualGroup;
                connections += group_count(actualGroup, i);
     
                res += connections * (connections - 1);
                actualGroup++;
                connections = 0;
            }
        }
     
        std::cout << res << "\n";
     
     
        return 0;
    }