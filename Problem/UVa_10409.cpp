#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    while (cin >> n && n) {
        int top = 1, north = 2, west = 3, south = 5, east = 4, bottom = 6;
        while (n--) {
            string cmd;
            cin >> cmd;
            int temp = top;
            if (cmd == "north") { top = south; south = bottom; bottom = north; north = temp; }
            else if (cmd == "south") { top = north; north = bottom; bottom = south; south = temp; }
            else if (cmd == "east") { top = west; west = bottom; bottom = east; east = temp; }
            else if (cmd == "west") { top = east; east = bottom; bottom = west; west = temp; }
        }
        cout << top << "\n";
    }
    return 0;
}
