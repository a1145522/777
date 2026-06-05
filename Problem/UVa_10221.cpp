#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double s, a;
    string type;
    while (cin >> s >> a >> type) {
        if (type == "min") a /= 60.0;
        if (a > 180.0) a = 360.0 - a;
        double r = s + 6440.0;
        double arc = 2.0 * M_PI * r * (a / 360.0);
        double chord = 2.0 * r * sin(a * M_PI / 360.0);
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
    return 0;
}
