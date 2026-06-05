#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        if (c > 1) cout << "\n";
        cout << "Case " << c << ":\n";
        vector<int> cost(36);
        for (int i = 0; i < 36; i++) cin >> cost[i];
        int q;
        cin >> q;
        while (q--) {
            int n;
            cin >> n;
            vector<int> min_bases;
            int min_cost = 2e9;
            for (int base = 2; base <= 36; base++) {
                int temp = n, current_cost = 0;
                if (temp == 0) current_cost = cost[0];
                while (temp > 0) {
                    current_cost += cost[temp % base];
                    temp /= base;
                }
                if (current_cost < min_cost) { min_cost = current_cost; min_bases = {base}; }
                else if (current_cost == min_cost) min_bases.push_back(base);
            }
            cout << "Cheapest base(s) for number " << n << ":";
            for (int b : min_bases) cout << " " << b;
            cout << "\n";
        }
    }
    return 0;
}
