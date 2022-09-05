//
//  main.cpp
//  04_02
//
//  Created by Vlad V on 05.09.2022.
//

#include <iostream>

using namespace std;

string Func(float x){
    return x < 0 ? "Negative" : (x == 0 ? "Zero" : "Positiv" );
}

int main(int argc, const char * argv[]) {
    float n;
    cout << "Enter Number: " << endl; cin >> n;
    cout << Func(n) << endl;
}
