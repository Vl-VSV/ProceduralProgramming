//
//  main.cpp
//  03_01
//
//  Created by Vlad V on 04.09.2022.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S, p, r;
    int n;
    cout << "Enter summ, percent and numbers of years" << endl;
    cin >> S >> p >> n;
    
    r = p/100;
    cout << (S*r*pow(1+r, n))/(12*(pow(1+r, n) - 1)) << endl;
}
