#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int s;
    cin >> s;
    while (s--) {
        int n, i;
        double p;
        cin >> n >> p >> i;
        if (p == 0) cout << "0.0000\n";
        else {
            double q = 1.0 - p;
            cout << fixed << setprecision(4) << p * pow(q, i - 1) / (1.0 - pow(q, n)) << "\n";
        }
    }
    return 0;
}
