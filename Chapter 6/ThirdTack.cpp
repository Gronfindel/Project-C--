#include<iostream>
#include<cctype>
using namespace std;
void ShowMenu();
void Pianist();
void Game();
char word;
int main()
{
    ShowMenu();
    cin.get(word);
    while (word!='E'&& word!='e')
    {
        switch (word)
        {
        case 'a':
        case 'A':cout<<"Хищники питаются плотью убитой добычи.\n";
            ShowMenu();
            cin >> word;
            break;
        case 'b':
        case 'B':Pianist();
            break;
        case 'c':
        case 'C':
            cout <<"Интересный факт: Самое большое дерево – «Генерал Шерман» находится в "
            "\"Гигантском лесу \" Калифорнии. Его высота составляет 83,8м, а возраст – 2300-2700 лет.\n";
            ShowMenu();
            cin >> word;
            break;
        case 'd':
        case 'D':Game();
            break;
        default:
            cout << "Пожалуйста введите:a,b,c,d или e.";
            cin>>word;
            break;
        }
    }
    cout<<"До скорой встречи.";
    return 0;
}
void ShowMenu()
{
    cout<<"Пожалуйста выберите один из вариантов для продолжения:\n"
        "A) Хищник    B) Пианист\n"
        "C) Дерево    D) Игра\n"
        "E) Выход\n";
}
void Pianist()
{   
    const char* notes[]={"C-До","D-Рэ","E-Ми","F-Фа","G-Соль","A-Ля","B-Си"};
    cout<<"Введите цифру от 1-го до 7 чтобы узнать буквенное обозначение нот:\n";
    int Notes;cin>>Notes;
    while (Notes!=isalpha(Notes))
    {
        if (Notes <= 7)
        {
            cout << "Цифра " << Notes << " соответсвует буквенному обозначению \"" << notes[Notes]<<"\"" << endl;
            break;
        }
        else
        {
            cout << "Укажите значение именно от 1-го до 7-ми.\n";
            cin >> Notes;
        }
    }
    ShowMenu();
    cin>>word;
}
void Game()
{
    cout<<"Введите ваш год рождения:____\b\b\b\b";
    int year;cin>>year;
    if (year>=1950&&year<=2000)
    {
        cout<<"Поздравляю вы жили в 2-х веках\n";
    }
    else cout<<"Вероятность что вы увидите своими глазами 2 века очень мала.\n";
    ShowMenu();
    cin >> word;
}