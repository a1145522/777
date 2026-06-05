#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<string, int> m;
    string country, name;
    while (n--) {
        cin >> country;
        getline(cin, name);
        m[country]++;
    }
    for (auto const& [k, v] : m) cout << k << " " << v << "\n";
    return 0;
}
