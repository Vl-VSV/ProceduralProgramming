//
//  main.cpp
//  03_05
//
//  Created by Vlad V on 04.09.2022.
//

/*
 #include <iostream>
 #include <string>
 #include <algorithm>
 
 using namespace std;
 //dasfsadhfkjlrheuladjkfhlfhrefk
 
 int main() {
 string s;
 cout << "Enter string form 30 simvols" << endl; cin >> s; cout << endl;
 sort(s.begin(), s.end());
 cout << s << endl;
 }
 */


#include <iostream>

using namespace std;
//dasfsadhfkjlrheuladjkfhlfhrefk

int main() {
    string s;
    cout << "Enter string form 30 simvols" << endl; cin >> s; cout << endl;
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 30 - i - 1; j++){
            if (s[j] > s[j + 1]){
                swap(s[j], s[j+1]);
            }
        }
    }
    cout << "Result " << s;
}
