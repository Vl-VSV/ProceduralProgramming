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
        if (a[i] && a[i + 1] && a[i + 2] && a[i + 3] && a[i + 52] && a[i + 53]) {
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
