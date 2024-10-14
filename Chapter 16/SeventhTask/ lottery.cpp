#include <vector>
#include <ctime>
#include<iostream>
#include<algorithm>
std::vector<int> Lotto(int a,int b) 
{
    std::srand(unsigned(time(0)));
    std::vector<int> Random(b);
    for (int &x:Random)
        x=(rand() % (-a+1)) + 1;
    std::random_shuffle(Random.begin(),Random.end());
    return Random;
}
int main() {
    std::vector<int>winners;
    winners = Lotto(51, 6); 
    for(auto x:winners)
        std::cout<<x<<std::endl;
    return 0;  
}