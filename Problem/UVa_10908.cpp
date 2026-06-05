#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n, q;
        cin >> m >> n >> q;
        cout << m << " " << n << " " << q << "\n";
        vector<string> grid(m);
        for (int i = 0; i < m; i++) cin >> grid[i];
        while (q--) {
            int r, c;
            cin >> r >> c;
            int rad = 0;
            char ch = grid[r][c];
            while (r - rad >= 0 && r + rad < m && c - rad >= 0 && c + rad < n) {
                bool ok = true;
                for (int i = r - rad; i <= r + rad; i++) {
                    for (int j = c - rad; j <= c + rad; j++) {
                        if (grid[i][j] != ch) { ok = false; break; }
                    }
                    if (!ok) break;
                }
                if (!ok) break;
                rad++;
            }
            cout << 2 * (rad - 1) + 1 << "\n";
        }
    }
    return 0;
}
