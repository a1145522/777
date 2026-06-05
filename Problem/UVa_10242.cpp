#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x[4], y[4];
    while (cin >> x[0] >> y[0]) {
        for (int i = 1; i < 4; i++) cin >> x[i] >> y[i];
        double ax, ay, bx, by, cx, cy;
        if (x[0] == x[2] && y[0] == y[2]) { bx=x[0]; by=y[0]; ax=x[1]; ay=y[1]; cx=x[3]; cy=y[3]; }
        else if (x[0] == x[3] && y[0] == y[3]) { bx=x[0]; by=y[0]; ax=x[1]; ay=y[1]; cx=x[2]; cy=y[2]; }
        else if (x[1] == x[2] && y[1] == y[2]) { bx=x[1]; by=y[1]; ax=x[0]; ay=y[0]; cx=x[3]; cy=y[3]; }
        else { bx=x[1]; by=y[1]; ax=x[0]; ay=y[0]; cx=x[2]; cy=y[2]; }
        cout << fixed << setprecision(3) << ax + cx - bx << " " << ay + cy - by << "\n";
    }
    return 0;
}
