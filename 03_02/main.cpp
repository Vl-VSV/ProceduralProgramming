//
//  main.cpp
//  03_02
//
//  Created by Vlad V on 04.09.2022.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double S, m, p;
    int n;
    
    cout << "Enter sum, month payment and numbers of years:" << endl;
    cin >> S >> m >> n;
    
    p = ((12 * m - 1) / S) * 100;
    cout << "Кредит давался под " << p << " %" << endl;

}
    
