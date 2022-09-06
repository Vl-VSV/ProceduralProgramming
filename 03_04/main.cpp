//
//  main.cpp
//  03_04
//
//  Created by Vlad V on 04.09.2022.
//

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    
    ifstream F;
    F.open("Test.txt"); // Change
    
    // Option 1
    /*
     char ch;
     while(F.get(ch)){
     isdigit(ch) ? cout << ch : cout << " ";
     }
     */
    
    //Option 2
    bool p = false;
    char ch;
    while(F.get(ch)){
        if (isdigit(ch)){
            p = true;
            cout << ch;
        } else {
            p ? cout << ", ": cout << "";
            p = false;
        }
    }
    

}
