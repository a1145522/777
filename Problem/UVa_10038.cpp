#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        vector<int> a(n), diffs;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) diffs.push_back(abs(a[i] - a[i - 1]));
        sort(diffs.begin(), diffs.end());
        bool jolly = true;
        for (int i = 0; i < n - 1; i++) {
            if (diffs[i] != i + 1) { jolly = false; break; }
        }
        cout << (jolly ? "Jolly\n" : "Not jolly\n");
    }
    return 0;
}
