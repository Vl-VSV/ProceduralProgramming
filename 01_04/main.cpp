//
//  main.cpp
//  01_04
//
//  Created by Vlad V on 03.09.2022.
//


/* В комнате светло, если на улице день и раздвинуты шторы или если включена лампа. Ваша программа должна, в зависимости от времени суток и состояния лампы и штор, отвечать на вопрос, светло ли в комнате.*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    bool isDay = false, isOpen = false, isLampOn = false;
    string i, j, k;
    
    cout << "На улице день? (y/n)" << endl;
    cin >> i;
    if (i == "y" or i == "yes"){
        isDay = true;
    }
    
    cout << "Шторы раздвинуты? (y/n)" << endl;
    cin >> j;
    if (j == "y" or j == "yes"){
        isOpen = true;
    }
    
    cout << "На улице день? (y/n)" << endl;
    cin >> k;
    if (k == "y" or k == "yes"){
        isLampOn = true;
    }
    
    (isLampOn or (isDay and isOpen)) ? cout << "Светло" <<endl : cout << "Темно" << endl;
}
