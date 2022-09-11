//
//  main.cpp
//  04_09
//
//  Created by Vlad V on 11.09.2022.
//

#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;
string FromDec(int x, int base){
    string n, alf = "0123456789ABCDEFGHIJKL";
    while (x > 0){
        n = alf[x%base] + n;
        x /= base;
    }
    return n;
}
int ToDec(string x, int base){
    int n;
    map <char, int> a;
    a['A'] = 10;
    a['B'] = 11;
    a['C'] = 12;
    a['D'] = 13;
    a['E'] = 14;
    a['F'] = 15;
    a['0'] = 0;
    a['1'] = 1;
    a['2'] = 2;a['3'] = 3;a['4'] = 4;a['5'] = 5;a['6'] = 6;a['7'] = 7;a['8'] = 8;a['9'] = 9;
    
    for (int i =  0; i < x.length(); i++){
        n += pow(base, x.length() -i - 1) * a[x[i]];
    }
    return n;
}
int main() {
    string n; cout << "Enter N: " << endl; cin >> n;
    int base; cout << "Enter Base N: " <<endl; cin >> base;
    int base2; cout << "Enter Base that you want: " << endl; cin >>base2;
    cout << "result: " << FromDec(ToDec(n, base), base2);
    
}

//AA2
