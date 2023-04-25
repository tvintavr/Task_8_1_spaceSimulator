#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    while (true) {
        std::cout << "Введите массу звездолета (т (~10..100)): ";
        float mass;
        std::cin >> mass;

        std::cout << "Введите силу тяги звездолета (МН (меганьютон (~0,1..1))): ";
        float thrust;
        std::cin >> thrust;

        std::cout << "Введите расчетное время (ч ( до 10000 ч): ";
        float time;
        std::cin >> time;

        if (time>10000||time<=0 || thrust>1 || thrust<0.1 || mass>100 ||mass<10 || std::cin.fail() || std::cin.peek() != '\n') {
            std::cerr << "Ошибка ввода данных";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "\n";
        } else {
            std::cout<< "Через "<<time<<" часов космический корабль окажется на расстоянии "<<
            thrust*1000000*time*time*3600*3600/2/mass/1000/1000<<" км от предыдущего положения\n";
        }

    }

}








