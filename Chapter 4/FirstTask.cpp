#include<iostream>
#include<string>
int main()
{   
    using namespace std;
    string fname,surname;
    cout<<"Введите ваше имя:";getline(cin,fname);
    cout<<"Введите вашу фамилию:";cin>>surname;
    char grade;
    cout<<"Какую буквенную оценку ты заслуживешь?";cin>>grade;
    //const char *pg=&grade; pg=pg-1;
    grade=grade-1;
    int age;
    cout<<"Введите ваш возраст:";cin>>age;
    cout<<"ваше полное имя: "<<fname<<" , "<<surname<<endl;
    cout<<"Ваша оценка: "<<grade<<endl;
    cout<<"Ваш возраст: "<<age;
    return 0;
}