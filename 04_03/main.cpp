//
//  main.cpp
//  04_03
//
//  Created by Vlad V on 05.09.2022.
//

#include <iostream>
#include <cmath>

using namespace std;
const float pi = 3.141592653589793238;

float Square(float a, float b){
    return a*b;
}

float Triangle(float a, float b, float c){
    if (a > b + c || b > a + c || c > a + b){
        cout << "Incorrect triangle" << endl;
        exit(0);
    }
    float p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float Circle(float r){
    return pi*r*r;
}

int main(int argc, const char * argv[]) {
    int f;
    cout << "1 - square, 2 - triangle, 3 - circle" << endl; cin >> f;
    
    switch (f) {
        case 1:
            float a,b;
            cout << "Enter sides a and b: " << endl; cin >> a >> b; cout << Square(a,b) << endl;
            break;
        case 2:
            float j, h, o;
            cout << "Enter side a, b and c: " << endl; cin >> j >> h >> o; cout << Triangle(j, h, o) << endl;
            break;
        case 3:
            float r;
            cout << "Enter radius: " << endl; cin >> r; cout << Circle(r) << endl;
            break;
            
        default:
            cout << "Error" << endl;
            break;
    }
}
