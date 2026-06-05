#include <iostream>
#include <iomanip>
using namespace std;
void print(long long n) {
    if (n >= 10000000) { print(n / 10000000); cout << " kuti"; n %= 10000000; }
    if (n >= 100000) { print(n / 100000); cout << " lakh"; n %= 100000; }
    if (n >= 1000) { print(n / 1000); cout << " hajar"; n %= 1000; }
    if (n >= 100) { print(n / 100); cout << " shata"; n %= 100; }
    if (n > 0) cout << " " << n;
}
int main() {
    long long n;
    int c = 1;
    while (cin >> n) {
        cout << setw(4) << c++ << ".";
        if (n == 0) cout << " 0";
        else print(n);
        cout << "\n";
    }
    return 0;
}
