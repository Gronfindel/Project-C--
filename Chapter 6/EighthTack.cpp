#include<iostream>
#include<fstream>
#include<cstdlib>
int main()
{
    using namespace std;
    string FileName;
    ifstream inFile;//обьект для обработки файлового ввода
    cout<<"Enter file name:";getline(cin,FileName);//запрос имени файла и ввод имени
    inFile.open(FileName);//ассоциация inFile с файлом
    if (!inFile.is_open())//не удалось открыть файл
    {
        cout<<"Could not open the file "<<FileName<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char symbol;
    inFile>>symbol;//ввод первого значения из файла
    int count=0;//количество прочитанных елементов
    while(inFile.good())//пока ввод успешен и не достигнут конец файла
    {
        ++count;
        inFile>>symbol;
    }
    if (count==0)// Данные для обработки отсутсвуют
        cout<<"No data processed.\n";
    else cout<<"Items read: "<<count<<endl;//количество прочитанных элементов
    inFile.close();//завершение работы с файлом
    return 0;
}