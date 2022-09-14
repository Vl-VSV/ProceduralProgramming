//
//  main.cpp
//  05_04
//
//  Created by Vlad V on 14.09.2022.
//

#include <cmath>
#include <iostream>

using namespace std;
// Number 1
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    double ans = 0;
    
    for (int i = 1; i <= n; i++) {
        double z = 0;
        for (int j = 1; j <= i; j++) {
            z += sin(j);
        }
        // cout << i << " " << z << endl;
        ans += (i / z);
    }
    
    cout << "Answer = " << ans << endl;
}
