#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // First print 2^n - 1
        cout << (1 << n) - 1 << " ";

        // Replicate the nested loops exactly
        for (int i = 1; i <= n; i++) {
            int block = 1 << (n - i);
            for (int j = 0; j < (1 << i); j += 2) {
                int value = j * block + block - 1;
                cout << value << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}

