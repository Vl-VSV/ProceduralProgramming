//
//  main.cpp
//  01_02
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>
using namespace std;

// bx + c = 0
int main() {
    double b, c;
    
    cout << "bx + c = 0\nEnter b and c" << endl;
    cin >> b >> c;
    
    b != 0 ? cout << -c/b << endl: cout << "Error";
}
