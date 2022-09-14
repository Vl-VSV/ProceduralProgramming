//
//  main.cpp
//  05_04_02
//
//  Created by Vlad V on 14.09.2022.
//

#include <iostream>
#include <string>

using namespace std;
// Number 28
int main(int argc, const char * argv[]) {
    string n;
    int s = 0;
    cout << "Enter N: " << endl; cin >> n; cout << endl;
    
    for (int i = 0; i < n.length(); i++){
        //cout << int(n[i]) - 48 << endl;
        s += int(n[i]) - 48;
    }
    
    cout << "Answer = " << s << endl;
    return 0;
}
