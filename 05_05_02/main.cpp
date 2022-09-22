//
//  main.cpp
//  05_05_02
//
//  Created by Vlad V on 22.09.2022.
//

#include <fstream>
#include <iostream>
using namespace std;

// Number 15

string FromDec(int x, int base) {
    string n, alf = "0123456789ABCDEFGHIJKL";
    while (x > 0) {
        n = alf[x % base] + n;
        x /= base;
    }
    return n;
}

int main() {
    string s;
    ofstream F("text1.txt");
    ofstream F2("text2.txt");
    
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        F << i + 1 << endl;
        F2 << FromDec(i + 1, 2) << endl;
    }
    
    F.close();
    F2.close();
    return 0;
}
