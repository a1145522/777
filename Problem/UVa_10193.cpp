#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
    int n;
    cin >> n;
    for (int p = 1; p <= n; p++) {
        string s1, s2;
        cin >> s1 >> s2;
        int v1 = stoi(s1, nullptr, 2);
        int v2 = stoi(s2, nullptr, 2);
        if (gcd(v1, v2) > 1) cout << "Pair #" << p << ": All you need is love!\n";
        else cout << "Pair #" << p << ": Love is not all you need!\n";
    }
    return 0;
}
