//
//  main.cpp
//  01_01
//
//  Created by Vlad V on 03.09.2022.
//

#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    
    cout << "Введите 1-е число" << endl;
    cin >> n1;
    
    cout << "Введите 2-е число" << endl;
    cin >> n2;
    
    
    cout << "Сумма " << n1+n2 << endl;
    cout << "Разность " << n1-n2<< endl;
    cout << "Произведение " << n1*n2 << endl;

    n2 != 0 ? cout << "Целая часть деления " << n1/n2 << endl: cout << "n2 == 0, division by zero";
    
}
