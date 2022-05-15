#include<iostream>
#include<cstring>
using namespace std;
const int SLEN=30;
struct student
{
    char FullName[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[],int class_size)
{
    int RealStudent=0;
    for (int i = 0; i < class_size; i++)
    {
        cout<<"Enter student name: ";cin.getline(pa[i].FullName,SLEN);
        if (strlen(pa[i].FullName)!=0)
        {
            cout<<"Enter student hobby: ";cin.getline(pa[i].hobby,SLEN);
            cout<<"Enter student oop level: ";cin>>pa[i].ooplevel;cin.get();
            RealStudent++;
        }
        else break;
    }
    return RealStudent;
}
void display1(student st)
{
    cout<<"Student name: "<<st.FullName<<endl;
    cout<<"Student hobby: "<<st.hobby<<endl;
    cout<<"Student oop level: "<<st.ooplevel<<endl;
}
void display2(const student* ps)
{
    cout << "Student name: " << ps->FullName << endl;
    cout << "Student hobby: " << ps->hobby << endl;
    cout << "Student oop level: " << ps->ooplevel << endl;
}
void display3(const student pa[],int n)
{
    cout<<"\nArray of structures\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student name: " <<pa[i].FullName<<endl;
        cout << "Student hobby: " <<pa[i].hobby<<endl;
        cout << "Student oop level: "<<pa[i].ooplevel<<endl;
    }  
}
int main()
{
    cout<<"Enter class size: ";
    int class_size;
    cin>>class_size;
    while(cin.get()!='\n')
        continue;
    student* ptr_stu=new student[class_size];
    int entered=getinfo(ptr_stu,class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete[] ptr_stu;
    cout<<"done\n";
    return 0;
}