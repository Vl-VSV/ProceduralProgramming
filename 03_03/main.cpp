//
//  main.cpp
//  03_03
//
//  Created by Vlad V on 04.09.2022.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream F;
    F.open("Test.txt");
    
    // Option 1
    /*
     char ch;
     while(F.get(ch)){
     cout << ch;
     }
     */
    
    // Option 2
    string s;
    while (getline(F, s)){
        cout << s << endl;
    }
    
    F.close();
    return 0;
}
