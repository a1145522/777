#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int i;
    while (cin >> i && i != 0) {
        string bin = "";
        int p = 0;
        while (i > 0) {
            bin += to_string(i % 2);
            if (i % 2 == 1) p++;
            i /= 2;
        }
        reverse(bin.begin(), bin.end());
        cout << "The parity of " << bin << " is " << p << " (mod 2).\n";
    }
    return 0;
}
