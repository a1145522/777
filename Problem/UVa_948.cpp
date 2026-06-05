#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> fib = {1, 2};
    while (fib.back() < 100000000) fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    while (t--) {
        int n;
        cin >> n;
        cout << n << " = ";
        bool start = false;
        for (int i = fib.size() - 1; i >= 0; i--) {
            if (n >= fib[i]) {
                cout << "1";
                n -= fib[i];
                start = true;
            } else if (start) {
                cout << "0";
            }
        }
        cout << " (fib)\n";
    }
    return 0;
}
