//
//  main.cpp
//  S_02
//
//  Created by Vlad V on 18.09.2022.
//

#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cout << "Enter N and K: " << endl;
    cin >> n >> k;
    
    vector<int> a = {};
    
    for (int i = 0; i < n; i++)
        a.push_back(0);
    
    // for (int i = 0; i < n; i++)
    //   cout << typeid(a[i]).name() << " ";
    
    cout << endl;
    for (int i = 0; i < k; i++) {
        
        int maxx = 0, z = 0, y = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == 0) {
                z++;
            } else {
                if (maxx < z) {
                    maxx = z;
                    y = j;
                }
                z = 0;
            }
            if (maxx < z) {
                maxx = z;
                y = j;
            }
        }
        // cout << "Maxx = " << maxx << endl << "Y = " << y << endl;
        
        a[y - (maxx - 1) + (maxx / 2)] = 1;
        
        if (i == k - 1) {
            maxx % 2 == 0 ? cout << "Answer : " << maxx / 2 - 1 << " " << maxx / 2
            << endl
            : cout << "Answer : " << maxx / 2 << " " << maxx / 2 << endl
            << endl;
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
