#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l;
        cin >> l;
        vector<int> a(l);
        for (int i = 0; i < l; i++) cin >> a[i];
        int swaps = 0;
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l - 1 - i; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    swaps++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swaps << " swaps.\n";
    }
    return 0;
}
