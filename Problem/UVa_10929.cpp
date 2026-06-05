#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while (cin >> s && s != "0") {
        int alt_sum = 0;
        for (size_t i = 0; i < s.length(); i++) {
            if (i % 2 == 0) alt_sum += s[i] - '0';
            else alt_sum -= s[i] - '0';
        }
        if (alt_sum % 11 == 0) cout << s << " is a multiple of 11.\n";
        else cout << s << " is not a multiple of 11.\n";
    }
    return 0;
}
