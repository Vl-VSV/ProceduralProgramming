//
//  main.cpp
//  02_01
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main() {
    double R, r, h, l;
    cout << "Enter R (top), r (bottom) and h" << endl;
    cin >> R >> r >> h;
    l = sqrt(h*h + (r-R)*(r-R));
    cout << "V = " << M_PI * h * (R * R + R * r + r * r) / 3.0 << endl;
    cout << "S = " << M_PI *(R*R + (R + r)*l + r*r) << endl;
}
