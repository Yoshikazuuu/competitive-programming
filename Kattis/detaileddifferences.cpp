#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        cout << a << "\n" << b << "\n";
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == b[i]) {
                cout << '.';
            } else {
                cout << '*';
            }
        }
        cout << "\n\n";
    }
}
