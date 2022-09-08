//
//  main.cpp
//  04_07
//
//  Created by Vlad V on 07.09.2022.
//

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int m, i, c, S0, S1;
    cout << "Enter m, i, c" << endl;
    cin >> m >> i >> c;
    S0 = 0; // or S = time(0)
    for (int j = 0; j < i; j++) {
        S1 = (m * S0 + j) % c;
        cout << S1 << " ";
        S0 = S1;
    }
    return 0;
}
