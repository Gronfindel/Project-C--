#include"FifthTaskStack.cpp"
#include<cctype>
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    Stack st;
    double Subtotal=0.0;
    char ch;
    customer po;//А-добавление заказа, P-обработка заказа, Q-завершение заказа
    cout<<"Please enter A to add a purchase order,\n"<<"P to process a PO or q to quit\n";
    while (cin>>ch&&toupper(ch)!='Q')
    {
        while (cin.get()!='\n')
            continue;
        if(!isalpha(ch))
        {
            cout<<'\a';continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':cout<<"Enter customer name to add: ";// Запрос номера заказа
                cin.get(po.fullname,35).get();
                cout<<"Enter customer payment to add: ";
                cin>>po.payment;
                if (st.isfull())
                cout<<"Stack already full\n";// Стек уже полон
                else
                st.push(po);   
        break;
        case 'P':
        case 'p':if(st.isempty())
                    cout<<"Stack already empty\n";// Стек уже пуст
                 else
                 {
                     st.pop(po);
                     Subtotal+=po.payment;
                     cout<<"Customer name: "<<po.fullname<<endl<<"Subtotal: "<<Subtotal<<endl;//Заказ вытолкнут
                 }
        break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye!!!";
    return 0;
}