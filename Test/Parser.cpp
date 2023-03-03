#include<iostream>
#include<fstream>
#include<cstdlib>
// template<typename T>
// T small_pars(std::string str)
// {
//     double x=0;
//     int y=0;
//     if ((str[0]>='0')&&(str[0]<='9'))
//     {
//         for (int i = 0; i < str.length(); i++)
//         {
//             if (str[i]=='.')
//             {
//                 x=stod(str);
//                 return x+5;
//                 break;
//             }
//             else 
//             {
//                 y=stoi(str);
//                 return y+5;
//                 break;
//             }
//         }
//     }
//     else std::cout<<"Entered text and on number.";
// }
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
    // inFile>>symbol;//ввод первого значения из файла
    int count=0;//количество прочитанных елементов
    while(inFile.good())//пока ввод успешен и не достигнут конец файла
    {
        string line;
        int x; double y;
        while (getline(inFile, line))// Запись из файла в строку до новой строки.(По условию задачи)
        {
            count++;
            if ((line[0]>='0')&&(line[0]<='9'))
            {
                if (line.find('.')!=string::npos)
                {
                y=stod(line);
                cout<<"The value of the read string of type double + 5: "<<y+5<<endl;
                }
                else 
                {
                x=stoi(line);
                cout<<"The value of the read string of type int + 5: "<<x+5<<endl;
                }
            }   
            else std::cout<<"Entered text and on number."<<endl;
        }
    }
    if (count==0)// Данные для обработки отсутсвуют
        cout<<"No data processed.\n";
    else cout<<"Items read: "<<count<<endl;//количество прочитанных элементов
    inFile.close();//завершение работы с файлом
    return 0;
}