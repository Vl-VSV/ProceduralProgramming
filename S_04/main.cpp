//
//  main.cpp
//  S_04
//
//  Created by Vlad V on 18.09.2022.
//

#include <iostream>
using namespace std;

// Number 4
int main() {
    int n, k;
    int a[54] = {0};
    int b[9] = {0};
    
    cout << "Enter N: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k - 1] = 1;
    }
    
    for (int i = 0; i <= 32; i += 4) {
        if ((a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 52] && a[i + 53] &&
             i == 0) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 46] && a[i + 47] &&
             i == 4) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 40] && a[i + 41] &&
             i == 8) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 34] && a[i + 35] &&
             i == 12) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 28] && a[i + 29] &&
             i == 16) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 22] && a[i + 23] &&
             i == 20) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 16] && a[i + 17] &&
             i == 24) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 10] && a[i + 11] &&
             i == 28) ||
            (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 4] && a[i + 5] &&
             i == 32)) {
            b[i / 4] = 1;
        }
    }
    
    int r = 0, ans = 0;
    
    for (int i = 0; i < 9; i++) {
        if (b[i])
            r++;
        else {
            if (ans < r) {
                ans = r;
                r = 0;
            }
        }
    }
    
    cout << "Answer = " << ans << endl;
    
    // for (int i = 0; i < 9; i++) {
    //   cout << b[i];
    // }
}
