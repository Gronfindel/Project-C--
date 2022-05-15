#include <iostream>
void simon(int);
int main()
{
    using namespace std;
    simon(3);
    cout << "Выберите целое число:";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!!!" << endl;
    return 0;
}
void simon(int n)
{
    std::cout << "Simon говорит дотронуться до пальцев " << n << " раз.\n";
}