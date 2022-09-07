//
//  main.cpp
//  04_05
//
//  Created by Vlad V on 05.09.2022.
//

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    // Номер потока для буфера консоли в системе
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    // Экранный буфер консоли (двумерный массив данных)
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    // Извлечение информации о заданном экранном буфере консоли
    GetConsoleScreenBufferInfo(handle, &consoleInfo);
    
    // Расчет размеров консоли
    int height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
    int width = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
    
    // Функции для расчета координат по х и у и их округление
    auto GetX = [&](double x) { return int(x / 7 * width); };
    auto GetY = [&](double y) { return int((-y / 1 + 1) * (height / 2)); };
    
    // Координаты символа в консоли
    _COORD c;
    // Рисование графика с шагом 0.02
    for (double i = 0; i < 7; i += 0.02)
    {
        // Расчет позиции
        c.X = GetX(i);
        c.Y = GetY(sin(i));
        // Установка курсора в расчитаную позицию
        SetConsoleCursorPosition(handle, c);
        // Вывод любого знака
        cout << '#';
    }
    
    // Пауза вывода в консоль, чтобы не было "Процесс завершил работу с кодом ..." посреди графика
    cin.get();
    CloseHandle(handle);
    
    return 0;
}
