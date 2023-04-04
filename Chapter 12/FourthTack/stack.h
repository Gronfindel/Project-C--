typedef unsigned long Item;
class stack
{
private:
    enum{MAX=10}; //константа, спецефичная для класса
    Item *pitems; //хранит элементы стека
    int size;     //количество элементов в стеке
    int top;      //индекс для верхнего элементов стека
public:
    stack(int n=10); //создает стек n с элементами
    stack(const stack &stack); 
    ~stack();
    bool isempty()const;
    bool isfull()const;
    bool push(const Item &item);//возвращает false, если стек уже полный
    bool pop(Item &item);//возвращает false, если стек уже пустой
    stack &operator=(const stack &st);
};
