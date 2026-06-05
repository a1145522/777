#include <iostream>
#include <algorithm>
using namespace std;
int cycle_length(int n) {
    int len = 1;
    while (n != 1) {
        if (n % 2 != 0) n = 3 * n + 1;
        else n /= 2;
        len++;
    }
    return len;
}
int main() {
    int i, j;
    while (cin >> i >> j) {
        cout << i << " " << j << " ";
        int max_len = 0;
        for (int k = min(i, j); k <= max(i, j); k++) {
            max_len = max(max_len, cycle_length(k));
        }
        cout << max_len << "\n";
    }
    return 0;
}
