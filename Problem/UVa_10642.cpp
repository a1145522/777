#include <iostream>
using namespace std;
long long pos(long long x, long long y) {
    long long n = x + y;
    return n * (n + 1) / 2 + x;
}
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << "Case " << i << ": " << pos(x2, y2) - pos(x1, y1) << "\n";
    }
    return 0;
}
