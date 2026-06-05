#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> v;
    string s;
    size_t max_len = 0;
    while (getline(cin, s)) {
        v.push_back(s);
        max_len = max(max_len, s.length());
    }
    for (size_t i = 0; i < max_len; i++) {
        for (int j = v.size() - 1; j >= 0; j--) {
            if (i < v[j].length()) cout << v[j][i];
            else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
