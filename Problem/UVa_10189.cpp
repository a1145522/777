#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int n, m, field = 1;
    while (cin >> n >> m && (n || m)) {
        if (field > 1) cout << "\n";
        vector<string> grid(n);
        for (int i = 0; i < n; i++) cin >> grid[i];
        cout << "Field #" << field++ << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '*') cout << '*';
                else {
                    int count = 0;
                    for (int x = -1; x <= 1; x++) {
                        for (int y = -1; y <= 1; y++) {
                            int ni = i + x, nj = j + y;
                            if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*')
                                count++;
                        }
                    }
                    cout << count;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
