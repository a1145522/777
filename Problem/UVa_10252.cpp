#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        int c1[26] = {0}, c2[26] = {0};
        for (char c : a) if (c >= 'a' && c <= 'z') c1[c - 'a']++;
        for (char c : b) if (c >= 'a' && c <= 'z') c2[c - 'a']++;
        for (int i = 0; i < 26; i++) {
            cout << string(min(c1[i], c2[i]), i + 'a');
        }
        cout << "\n";
    }
    return 0;
}
