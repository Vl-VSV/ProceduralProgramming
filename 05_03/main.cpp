//
//  main.cpp
//  05_03
//
//  Created by Vlad V on 12.09.2022.
//

#include <iostream>
#include <fstream>

using namespace std;
// Number 1
int main(int argc, const char * argv[]) {
    ifstream F;
    F.open("Test.txt");
    
    char ch;
    while(F.get(ch))
        ch == ' ' ? cout << ", " : cout << ch;
    
    return 0;
}
