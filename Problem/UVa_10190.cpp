#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long n, m;
    while (cin >> n >> m) {
        if (n < 2 || m < 2) { cout << "Boring!\n"; continue; }
        vector<long long> seq;
        bool possible = true;
        while (n > 1) {
            seq.push_back(n);
            if (n % m != 0) { possible = false; break; }
            n /= m;
        }
        seq.push_back(1);
        if (possible) {
            for (size_t i = 0; i < seq.size(); i++) cout << seq[i] << (i + 1 == seq.size() ? "" : " ");
            cout << "\n";
        } else {
            cout << "Boring!\n";
        }
    }
    return 0;
}
