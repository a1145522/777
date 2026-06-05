#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int w, h;
    cin >> w >> h;
    int x, y;
    char dir;
    vector<vector<bool>> scent(w + 1, vector<bool>(h + 1, false));
    string dirs = "NESW";
    int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
    while (cin >> x >> y >> dir) {
        string inst;
        cin >> inst;
        int d = dirs.find(dir);
        bool lost = false;
        for (char c : inst) {
            if (c == 'R') d = (d + 1) % 4;
            else if (c == 'L') d = (d + 3) % 4;
            else if (c == 'F') {
                int nx = x + dx[d], ny = y + dy[d];
                if (nx < 0 || nx > w || ny < 0 || ny > h) {
                    if (!scent[x][y]) { lost = true; scent[x][y] = true; break; }
                } else { x = nx; y = ny; }
            }
        }
        cout << x << " " << y << " " << dirs[d] << (lost ? " LOST\n" : "\n");
    }
    return 0;
}
