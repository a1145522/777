#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    string line;
    getline(cin, line);
    while (t--) {
        map<string, int> trees;
        int total = 0;
        while (getline(cin, line) && line != "") {
            trees[line]++;
            total++;
        }
        for (auto const& [name, count] : trees) {
            cout << name << " " << fixed << setprecision(4) << (count * 100.0 / total) << "\n";
        }
        if (t) cout << "\n";
    }
    return 0;
}
