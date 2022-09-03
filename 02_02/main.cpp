//
//  main.cpp
//  02_02
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, a;
    cout << "Enter x and a" << endl;
    cin >> x >> a;
    
    if (abs(x) < 1)
        x != 0 ? cout << "w = " << (a * log(x)) << endl : cout << "Error" << endl;
    else
        a >= x * x  ? cout << "w = " << sqrt(a - x * x) << endl : cout << "Error" << endl;
}
