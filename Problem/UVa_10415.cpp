#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    map<char, vector<int>> f = {
        {'c', {2,3,4,7,8,9,10}}, {'d', {2,3,4,7,8,9}}, {'e', {2,3,4,7,8}},
        {'f', {2,3,4,7}}, {'g', {2,3,4}}, {'a', {2,3}}, {'b', {2}},
        {'C', {3}}, {'D', {1,2,3,4,7,8,9}}, {'E', {1,2,3,4,7,8}},
        {'F', {1,2,3,4,7}}, {'G', {1,2,3,4}}, {'A', {1,2,3}}, {'B', {1,2}}
    };
    while (t--) {
        string s;
        getline(cin, s);
        int presses[11] = {0};
        bool active[11] = {false};
        for (char c : s) {
            bool next_active[11] = {false};
            for (int finger : f[c]) {
                next_active[finger] = true;
                if (!active[finger]) presses[finger]++;
            }
            for (int i = 1; i <= 10; i++) active[i] = next_active[i];
        }
        for (int i = 1; i <= 10; i++) cout << presses[i] << (i == 10 ? "" : " ");
        cout << "\n";
    }
    return 0;
}
