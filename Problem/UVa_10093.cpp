#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
        int sum = 0, max_digit = 1;
        for (char c : s) {
            int val = 0;
            if (c >= '0' && c <= '9') val = c - '0';
            else if (c >= 'A' && c <= 'Z') val = c - 'A' + 10;
            else if (c >= 'a' && c <= 'z') val = c - 'a' + 36;
            sum += val;
            max_digit = max(max_digit, val);
        }
        int base;
        for (base = max_digit + 1; base <= 62; base++) {
            if (sum % (base - 1) == 0) break;
        }
        if (base <= 62) cout << base << "\n";
        else cout << "such number is impossible!\n";
    }
    return 0;
}
