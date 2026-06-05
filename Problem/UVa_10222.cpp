#include <iostream>
#include <string>
using namespace std;
int main() {
    string keys = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while (getline(cin, s)) {
        for (char c : s) {
            c = tolower(c);
            size_t pos = keys.find(c);
            if (pos != string::npos && pos >= 2) cout << keys[pos - 2];
            else cout << c;
        }
        cout << "\n";
    }
    return 0;
}
