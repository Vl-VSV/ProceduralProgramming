//
//  main.cpp
//  02_05
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>

using namespace std;

int main() {
    for (float x = -4; x <= 4; x += 0.5)
        x - 1 != 0 ? cout << "x = " << x << ", y = "<< (x*x - 2*x + 2)/(x-1) << endl : cout << "Devision by zero" << endl;
}
