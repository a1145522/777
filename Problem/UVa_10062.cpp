#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s;
    bool first = true;
    while (getline(cin, s)) {
        if (!first) cout << "\n";
        first = false;
        int freq[256] = {0};
        for (char c : s) freq[(unsigned char)c]++;
        vector<pair<int, int>> v;
        for (int i = 0; i < 256; i++) {
            if (freq[i] > 0) v.push_back({freq[i], -i});
        }
        sort(v.begin(), v.end());
        for (auto p : v) cout << -p.second << " " << p.first << "\n";
    }
    return 0;
}
