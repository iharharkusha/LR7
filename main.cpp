#include <iostream>

#include "./general/header-files/utils.h"

#include "./Task_1/header-files/task1.h"
#include "./Task_2/header-files/task2.h"

int main() {
    std::cout << "Лабораторная работа 7. Вариант 6.\n";
    std::cout << "Выполнил Гаркуша Игорь Вячеславович, группа 453502\n\n";
    int type;
    while (true) {
        std::cout << "Список выполненных заданий:\n";
        std::cout << " - Задание 1 (для выбора нажмите 1)\n";
        std::cout << " - Задание 2 (для выбора нажмите 2)\n\n";    
        std::cout << "для завершения работы ВСЕЙ программы - введите 0\n";
        type = readIntegerInLine();
        if (type != 0 && type != 1 && type != 2) {
            std::cout << "Некорректный ввод\n";
            continue;
        }
        if (type == 0) {
            break;
        }
        switch (type) {
            case 1: 
                task1();
            case 2: 
                task2();
        }
    }
    return 0;
}