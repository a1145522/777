#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
int main() {
    long long x;
    string line;
    while (cin >> x) {
        cin.ignore();
        getline(cin, line);
        stringstream ss(line);
        vector<long long> a;
        long long c;
        while (ss >> c) a.push_back(c);
        long long n = a.size() - 1, res = 0, p = 1;
        for (int i = n - 1; i >= 0; i--) {
            res += a[i] * (n - i) * p;
            p *= x;
        }
        cout << res << "\n";
    }
    return 0;
}
