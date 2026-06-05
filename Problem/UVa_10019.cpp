#include <iostream>
using namespace std;
int countBits(int n) {
    int c = 0;
    while (n) { c += n & 1; n >>= 1; }
    return c;
}
int main() {
    int n, m;
    cin >> n;
    while (n--) {
        cin >> m;
        int b1 = countBits(m);
        int hex_val = 0, base = 1, temp = m;
        while (temp) {
            hex_val += (temp % 10) * base;
            base *= 16;
            temp /= 10;
        }
        int b2 = countBits(hex_val);
        cout << b1 << " " << b2 << "\n";
    }
    return 0;
}
