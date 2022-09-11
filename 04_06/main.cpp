//
//  main.cpp
//  04_06
//
//  Created by Vlad V on 05.09.2022.
//

#include <iostream>
#include <map>

using namespace std;

int chek(string n){
    for (int i = 0; i < n.length() - 3; i++){
        if (n[i] == n[i + 1] &&  n[i+2] == n[i+1] && n[i+2] == n[i+3]){
            cout << "Incorrect Num!";
            exit(0);
        }
    }
    return 0;
}

int main(){
    string n;
    cout << "Enter num: "; cin >> n; cout << endl;
    
    check(n);
    
    map <char, int> a;
    a['M'] = 1000;
    a['D'] = 500;
    a['C'] = 100;
    a['L'] = 50;
    a['X'] = 10;
    a['V'] = 5;
    a['I'] = 1;
    
    int ans = 0;
    for(int i = 0; i < n.size() - 1; i++){
        if (a[n[i]] < a[n[i+1]])
            ans -= a[n[i]];
        else
            ans += a[n[i]];
    }
    ans += a[n[n.size() - 1]];
    
    cout << "Result = " << ans << endl;
}

//XIV
