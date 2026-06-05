#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, c = 1;
    while (cin >> n) {
        vector<int> b(n);
        bool b2 = true;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] < 1 || (i > 0 && b[i] <= b[i - 1])) b2 = false;
        }
        set<int> sums;
        for (int i = 0; i < n && b2; i++) {
            for (int j = i; j < n && b2; j++) {
                if (sums.count(b[i] + b[j])) b2 = false;
                sums.insert(b[i] + b[j]);
            }
        }
        cout << "Case #" << c++ << ": It is " << (b2 ? "a B2-Sequence.\n\n" : "not a B2-Sequence.\n\n");
    }
    return 0;
}
