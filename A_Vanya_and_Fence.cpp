#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, h, height,width;
    cin >> n >> h;
    width = 0;

    for (int i = 0; i < n; i++) {
        cin >> height;
        if (height <= h) {
            width += 1;
        } else {
            width += 2; 
        }
    }
    cout << width << endl;
    return 0;
}
