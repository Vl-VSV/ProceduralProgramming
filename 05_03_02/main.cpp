//
//  main.cpp
//  05_03_02
//
//  Created by Vlad V on 12.09.2022.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

using namespace std;
// Number 28
int main(int argc, const char * argv[]) {
    ifstream F;
    F.open("Test.txt");
    
    vector <char> a;
    
    char ch;
    while(F.get(ch))
        a.push_back(ch);
    
    for (int i=0; i<a.size(); i++)
        a[i] != '\n' ? cout << "'" << a[i]  << "'" << ", " : cout << "'" << "/n"  << "'" << ", ";

    cout << endl;
    return 0;
}
