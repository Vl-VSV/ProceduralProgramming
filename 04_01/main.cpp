//
//  main.cpp
//  04_01
//
//  Created by Vlad V on 05.09.2022.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Create File and added 10 numbers
    ofstream fout("Test.txt");
    
    double a[10];
    double s = 0;
    string str;
    
    for (int i = 0; i < 10; i++){
        cout << "Enter number " << i+1 << ") " << endl;
        cin >> a[i];
        fout << a[i] << endl;
    }
    fout.close();
    
    // Open file, read and print 10 numbers
    
    ifstream fin("Test.txt");
    for (int i = 0; i < 10; i++)
        s += a[i];
    
    fin.close();
    
    cout << "Sum = " << s << endl;
    
    return 0;
}
