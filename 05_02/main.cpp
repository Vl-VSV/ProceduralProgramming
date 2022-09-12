//
//  main.cpp
//  05_02
//
//  Created by Vlad V on 12.09.2022.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    long long int n;
    cout << "Enter N: "; cin >> n;
    
    int *a = new int[n + 1];
    for (int i = 0; i<= n; i++)
        a[i] = i;
    
    for (int i = 2; i * i <= n; i++){
        if (a[i])
            for (int j = i*i; j <= n; j+=i)
                a[j] = 0;
    }
    
    for (int i = 0; i <= n; i++)
        a[i] ? cout << a[i] << ", " : cout << "";
    cout << endl;
}
