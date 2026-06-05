#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> h(p);
        for (int i = 0; i < p; i++) cin >> h[i];
        int lost = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 7 == 6 || i % 7 == 0) continue;
            bool hartal = false;
            for (int j = 0; j < p; j++) {
                if (i % h[j] == 0) hartal = true;
            }
            if (hartal) lost++;
        }
        cout << lost << "\n";
    }
    return 0;
}
