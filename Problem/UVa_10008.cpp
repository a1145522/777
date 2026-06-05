#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    int count[26] = {0};
    while (n--) {
        string s;
        getline(cin, s);
        for (char c : s) {
            if (isalpha(c)) count[toupper(c) - 'A']++;
        }
    }
    vector<pair<int, char>> v;
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) v.push_back({-count[i], i + 'A'});
    }
    sort(v.begin(), v.end());
    for (auto p : v) {
        cout << p.second << " " << -p.first << "\n";
    }
    return 0;
}
