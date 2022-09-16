//
//  main.cpp
//  Balls
//
//  Created by Vlad V on 16.09.2022.
//

#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

void PeremeshivanieMassiva(int m[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++)
        swap(m[i], m[rand() % size]);
}

int main(int argc, const char * argv[]) {
    
    int n, k = 0;
    cout << "Enter N: "; cin >> n; cout << endl;
    
    int a[n];
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
        
    PeremeshivanieMassiva(a, n);
    
    for (int i = 0; i < n; i++){
        if (a[i] == i + 1){
            k++;
        }
        cout << a[i] << ", ";
    }
    
    cout << endl;
    cout << "Number of matches = " << k << endl;
    cout << "Probability of matches = " << float(k)/float(n) << endl;
    cout << endl;
    
    return 0;
}

