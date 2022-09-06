//
//  main.cpp
//  04_04
//
//  Created by Vlad V on 05.09.2022.
//

#include <iostream>

using namespace std;

int main () {
    string s1 = "* * * * * * * * ";
    string s2 = "";
    for (int i = 0; i < 44; i++)
        s1 += "|";
    
    for (int i = 0; i < 60; i++)
        s2 += "|";
    
    for (int i = 0; i < 7; i++)
        cout << s1 << endl;
    
    for (int i = 0; i < 5; i++)
        cout << s2 << endl;
    
    return 0;
}
