// Base 12.10
#ifndef QueueTPTPTP_H_
#define QueueTPTPTP_H_
#include <cstdlib>
template<class T>
class QueueTP
{
private:
// определения области дейстия класса
    // Node-вложенная структура, локальная для данного класса
    struct Node { T item; struct Node * next;};
    enum {Q_SIZE = 10};
// закрытые члены класса 
    Node * front;       //указатель на начало QueueTPTP
    Node * rear;        //указатель на конец QueueTPTP
    int items;          //текущее количество элементов QueueTPTP
    const int qsize;    //мксимальное количество элементов QueueTPTP
    // Упреждающие обьявления для предотвращения открытого копирования
    QueueTP(const QueueTP & q) : qsize(0) { }
    QueueTP & operator=(const QueueTP & q) { return *this;}
public:
    QueueTP(int qs = Q_SIZE); // создание очереди с предельным размером qs
    ~QueueTP();
    bool isempty() const;
    bool isfull() const;
    int QueueTPcount() const;
    bool enQueueTP(const T &item); // добавление элемента в конец
    bool deQueueTP(T &item);       // удаление элемента из начала
};
template<class T>
QueueTP<T>::QueueTP(int qs) : qsize(qs)
{
    front = rear = NULL;    // или nullptr
    items = 0;
}
template<class T>
QueueTP<T>::~QueueTP()
{
    Node * temp;
    while (front != NULL)   //пока очередь не пуста
    {
        temp = front;       //сохранение адреса начального элемента
        front = front->next;//переустановка указателя на следующий элемент
        delete temp;        //удаление предыдущего начального элемента
    }
}
template<class T>
bool QueueTP<T>::isempty() const
{
    return items == 0;
}
template<class T>
bool QueueTP<T>::isfull() const
{
    return items == qsize;
}
template<class T>
int QueueTP<T>::QueueTPcount() const
{
    return items;
}
//Добавление элемента в очередь
template<class T>
bool QueueTP<T>::enQueueTP(const T & item)
{
    if (isfull())
        return false;
    Node * add = new Node;  //создание узла
//при неудачном выполнении операции new генерирует исключение std::bad_alloc
    add->item = item;       //занесение указателя на узлы 
    add->next = NULL;       //или nullptr;
    items++;
    if (front == NULL)      //если очередь пуста,
        front = add;        //элемент помещается в начало
    else
        rear->next = add;   //иначе он помещается в конец
    rear = add;             //указатель конца указывает на новый узел
    return true;
}
//Помещение элемента front в переменную item и его удаление из очереди
template<class T>
bool QueueTP<T>::deQueueTP(T & item)
{
    if (front == NULL)
        return false;
    item = front->item;     //в item заночится первый элемент из очереди
    items--;
    Node * temp = front;    //сохранение местоположения первого элемента
    front = front->next;    //сдвиг указателя начала на следующий елемент
    delete temp;            //удаление предыдущего элемента
    if (items == 0)
        rear = NULL;
    return true;
}
#endif