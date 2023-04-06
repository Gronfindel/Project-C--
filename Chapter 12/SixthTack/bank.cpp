/*10,10,100,18*/
#include <iostream>
#include <cstdlib> // для rand() и srand()
#include <ctime>   // для time()
#include "queue.cpp"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // появился ли новый клиент?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
//Подготовка
    std::srand(std::time(0));    //случайная инициализация rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of 1 queue: ";
    int qs,qs2;
    cin >> qs;
    cout << "Enter maximum size of 2 queue: ";
    cin>>qs2;
    Queue line(qs);         //очередь может содержать до qs людей
    Queue line2(qs2);
    cout << "Enter the number of simulation hours: ";
    int hours;              //часы эмуляции
    cin >> hours;
    //эмуляция будет запускать один цикл в минуту
    long cyclelimit = MIN_PER_HR * hours; //количество циклов

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //ввод количества клиентов в час
    cin >> perhour;
    double min_per_cust;    //среднее время между появлениями
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;              //данные нового клиента 
    long turnaways = 0;     //не допущены в полную очередь
    long customers = 0;     //присоедены к очереди
    long served = 0;        //обслужены во время эмуляции
    long sum_line = 0;      //общая длина очереди
    int wait_time = 0;      //время до освобождения банкомата
    long line_wait = 0;     //общее время в очереди


//запуск моделирования 
    for(int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  //есть подошедший клиент
        {
            if (line.isfull()&&line2.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);    // cycle = время прибытия 
                // line.enqueue(temp); //добавление новичка в очередь 
                if (line.queuecount()>line2.queuecount())
                {
                    line2.enqueue(temp);
                }
                else line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && (!line.isempty()||!line2.isempty()))
        {
            if (!line.isempty()&&!line .isempty())
            {
                if (line.queuecount()>line2.queuecount())
                {
                    line.dequeue(temp); 
                    sum_line+=line.queuecount();
                }
                else 
                {
                    line2.dequeue(temp); 
                    sum_line+=line2.queuecount();
                }
            }
            else
            {
                if (!line.isempty())
                {
                    line.dequeue(temp); 
                    sum_line+=line.queuecount();
                }
                else 
                {
                    line2.dequeue(temp); 
                    sum_line+=line2.queuecount();
                }
            }
            
       //обслуживанеи следующиего клиента
            wait_time = temp.ptime(); //в течении wait_time минут
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0)
            wait_time--;
        // sum_line += line.queuecount();
    }

//вывод результатов 
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl; //принято клиентов 
        cout << "  customers served: " << served << endl; //обслужено клиентов
        cout << "         turnaways: " << turnaways << endl; //не принято клиентов 
        cout << "average queue size: "; //средный размер очереди
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: " // среднее время ожидания (минут)
             << (double) line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";
    return 0;
}

//  x = среднее время в минутах между клиентами
//  возвращает значение true, если в эту минуту появляется клиент
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}
