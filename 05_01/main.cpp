//
//  main.cpp
//  05_01
//
//  Created by Vlad V on 12.09.2022.
//

#include <iostream>

using namespace std;

int NodV1(int a, int b){
    if (b == 0)
        return a;
    return NodV1(b, a % b);
}

int NodV2(int a, int b){
    while (a && b){
        if (a >= b)
            a -= b;
        else
            b -= a;
    }
    return a | b;
}

int main(int argc, const char * argv[]) {
    int a, b;
    cout << "Enter numbers a and b: "; cin >> a >> b;
    cout << NodV1(a, b) << endl;
    cout << NodV2(a, b) << endl;
    
    return 0;
}
