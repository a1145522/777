#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while (cin >> s && s != "0") {
        int sum = 0, degree = 1;
        for (char c : s) sum += c - '0';
        if (sum % 9 != 0) cout << s << " is not a multiple of 9.\n";
        else {
            while (sum > 9) {
                int temp = 0;
                while (sum) { temp += sum % 10; sum /= 10; }
                sum = temp;
                degree++;
            }
            cout << s << " is a multiple of 9 and has 9-degree " << degree << ".\n";
        }
    }
    return 0;
}
