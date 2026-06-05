#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        string s1, s2;
        int n;
        cin >> s1 >> s2 >> n;
        vector<long long> v(n * n);
        bool sym = true;
        for (int i = 0; i < n * n; i++) {
            cin >> v[i];
            if (v[i] < 0) sym = false;
        }
        for (int i = 0; i < n * n / 2 && sym; i++) {
            if (v[i] != v[n * n - 1 - i]) sym = false;
        }
        cout << "Test #" << c << ": " << (sym ? "Symmetric.\n" : "Non-symmetric.\n");
    }
    return 0;
}
