//
//  main.cpp
//  S_04
//
//  Created by Vlad V on 18.09.2022.
//

#include <iostream>
using namespace std;

int f(int k){
  if (k <= 36){
    return k/4;
  } else {
    return (8 - ((k - 36)/2));
  }
}

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
    
    for (int i = 0; i <= 54; i += 1) {
        if (a[i]){
          b[f(i)] += 1;
        }
    }
    
    int r = 0, ans = 0;
    
    for (int i = 0; i < 9; i++) {
        if (b[i] == 6)
            r++;
        else {
            if (ans < r) {
                ans = r;
                r = 0;
            }
        }
    }
    
    cout << "Answer = " << ans << endl;
    
    for (int i = 0; i < 9; i++) {
      cout << b[i];
    }
}
