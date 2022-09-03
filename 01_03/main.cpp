//
//  main.cpp
//  01_03
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>
#include <cmath>
using namespace std;

// ax2 + bx + c = 0.

int main() {
    double a, b, c, D;
    
    cout << "ax^2 + bx + c = 0\nEnter a, b and c" << endl;
    cin >> a >>  b >> c;
    
    D = b*b - 4*a*c;
    if (a != 0){
        if (D > 0){
            cout << "x1 = " << (-b + sqrt(D))/(2*a) << endl;
            cout << "x2 = " << (-b - sqrt(D))/(2*a) << endl;
        }
        else if (D == 0){
            cout << "x = " << (-b + sqrt(D))/(2*a) << endl;
        }
        else{
            cout << "No Solution" << endl;
        }
    }
    else
        b != 0 ? cout << -c/b << endl: cout << "Error";
    
}
