#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    while (t--) {
        int m, d;
        cin >> m >> d;
        int sum = d;
        for (int i = 1; i < m; i++) sum += days[i];
        cout << week[sum % 7] << "\n";
    }
    return 0;
}
