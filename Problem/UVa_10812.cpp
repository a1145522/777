#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long s, d;
        cin >> s >> d;
        if (s < d || (s + d) % 2 != 0) cout << "impossible\n";
        else cout << (s + d) / 2 << " " << (s - d) / 2 << "\n";
    }
    return 0;
}
