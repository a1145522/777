#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int m;
bool cmp(int a, int b) {
    if (a % m != b % m) return a % m < b % m;
    if (abs(a) % 2 != abs(b) % 2) return abs(a) % 2 > abs(b) % 2;
    if (abs(a) % 2 != 0) return a > b;
    return a < b;
}
int main() {
    int n;
    while (cin >> n >> m && (n || m)) {
        cout << n << " " << m << "\n";
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end(), cmp);
        for (int i : v) cout << i << "\n";
    }
    cout << "0 0\n";
    return 0;
}
