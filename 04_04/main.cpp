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
    string s3 = "* * * * * * * * ";
    string s4 = "";
    
    bool flag = false;
    for (int i = 0; i < 44; i++)
        s1 += "|";
    for (int i = 0; i < 44; i++)
        s3 += "–";
    
    for (int i = 0; i < 60; i++)
        s2 += "|";
    for (int i = 0; i < 60; i++)
        s4 += "–";
    
    for (int i = 0; i < 7; i++){
        if (flag){
            cout << s1 << endl;
            flag = false;
        }
        else{
            cout << s3 << endl;
            flag = true;
        }
    }
    
    
    for (int i = 0; i < 5; i++){
        if (flag){
            cout << s2 << endl;
            flag = false;
        }
        else{
            cout << s4 << endl;
            flag = true;
        }
    }
    
    return 0;
}
