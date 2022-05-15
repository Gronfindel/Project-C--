//  sp_Ch5_Pg256_Ex10
/// Занятия по книге Стивена Праты "Язык программирования С++" (2013, 6-е изд.)
/// Упражнения по программированию. Глава 5, страница 256, упражнение 10.
/*
Напишите программу, использующую вложенные циклы, которая запрашивает
у пользователя значение количества строк для отображения. Затем она должна
отобразить указанное число строк со звездочками, с одной звездочкой в первой
строке, двумя — во второй и т.д: В каждой строке звездочкам должны
предшествовать точки — в таком количестве, чтобы общее число символов в каждой
строке было равно количеству строк. Пример запуска программы должен
выглядеть следующим образом:

Введите количество строк: 5
....*
...**
..***
.****
*****

*/

// Функция isInteger() написана -=ЮрА=-:
// [url]https://www.cyberforum.ru/cpp-beginners/thread764125.html#post4014736[/url]

// Цикл while написан юзером gray_fox:
// [url]https://www.cyberforum.ru/cpp-beginners/thread1225226-page2.html#post6413181[/url]

#include <iostream>
#include <windows.h>
#include <limits>
#include <typeinfo>

template <class T>
bool isInteger(T val);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int qty = 0;

    while (true)
    {
        std::cout << "Введите количество строк: ";
        std::cin >> qty;
        if ((isInteger(qty)))
        {
            if (qty > 0)
                break;
            else
                std::cout << "Вы должны ввести целое "
                             "число больше нуля."
                          << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < qty; ++i)
    {

        for (int j = 0; j < qty; ++j)
        {
            std::cout << ".";
        }

        for (int j = 0; j < i + 1; ++j)
        {
            std::cout << "\b";
        }
        for (int j = 0; j < i + 1; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

template <class T>
bool isInteger(T val)
{
    return typeid(val) == typeid(int);
}