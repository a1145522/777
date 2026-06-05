#include <iostream>
using namespace std;
int main() {
    long long s, d;
    while (cin >> s >> d) {
        long long sum = 0;
        while (sum < d) {
            sum += s;
            if (sum >= d) break;
            s++;
        }
        cout << s << "\n";
    }
    return 0;
}
