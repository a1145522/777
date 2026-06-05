#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;
        vector<int> s(r);
        for (int i = 0; i < r; i++) cin >> s[i];
        sort(s.begin(), s.end());
        int mid = s[r / 2], dist = 0;
        for (int i = 0; i < r; i++) dist += abs(s[i] - mid);
        cout << dist << "\n";
    }
    return 0;
}
