#ifndef QUEUE_H_
#define QUEUE_H_
//Очередь, содержащая элементы Customer
class Customer
{
private:
    long arrive;        // момент появления клиента 
    int processtime;    // время обслуживания клиента
public:
    Customer() : arrive(0), processtime (0){}
    void set(long when);
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;
class Queue
{
private:
// определения области дейстия класса
    // Node-вложенная структура, локальная для данного класса
    struct Node { Item item; struct Node * next;};
    enum {Q_SIZE = 10};
// закрытые члены класса 
    Node * front;       //указатель на начало Queue
    Node * rear;        //указатель на конец Queue
    int items;          //текущее количество элементов Queue
    const int qsize;    //мксимальное количество элементов Queue
    // Упреждающие обьявления для предотвращения открытого копирования
    Queue(const Queue & q) : qsize(0) { }
    Queue & operator=(const Queue & q) { return *this;}
public:
    Queue(int qs = Q_SIZE); // создание очереди с предельным размером qs
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // добавление элемента в конец
    bool dequeue(Item &item);       // удаление элемента из начала
};
#endif