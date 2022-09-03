//
//  main.cpp
//  02_03
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, b;
    cout << "Enter x, y and b" << endl;
    cin >> x >> y >> b;
    
    b - y > 0 and b >= x ? cout << log(b-y)*sqrt(b-x) << endl : cout << "Error";
}
