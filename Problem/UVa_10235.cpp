#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    while (cin >> n) {
        if (!is_prime(n)) { cout << n << " is not prime.\n"; continue; }
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int rev = stoi(s);
        if (rev != n && is_prime(rev)) cout << n << " is emirp.\n";
        else cout << n << " is prime.\n";
    }
    return 0;
}
