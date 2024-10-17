#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <list>
#include <iterator>
int main()
{
    std::srand(time(0));
    std::vector<int> vi0(1000000);
    for(int &x:vi0)x=rand();
    std::vector<int> vi;
    std::list<int>li;
    // std::list<int>::iterator itLi=li.begin();
    // std::copy(vi0.begin(),vi0.end(),itLi); не работает почему???
    std::copy(vi0.begin(),vi0.end(),std::back_inserter(vi));
    std::copy(vi0.begin(),vi0.end(),std::inserter(li,li.begin()));
    clock_t start =clock();
    std::sort(vi.begin(),vi.end());
    clock_t end =clock();
    std::cout<<"Sort vector vi: "<<std::fixed<<(double)(end-start)/CLOCKS_PER_SEC<<std::endl;
    start =clock();
    li.sort();
    end =clock();
    std::cout<<"Sort list li: "<<std::fixed<<(double)(end-start)/CLOCKS_PER_SEC<<std::endl;
    std::copy(vi0.begin(),vi0.end(),std::inserter(li,li.begin()));
    start =clock();
    std::copy(li.begin(),li.end(),std::inserter(vi,vi.begin()));
    std::sort(vi.begin(),vi.end());
    std::copy(vi.begin(),vi.end(),std::inserter(li,li.begin()));
    end=clock();
    std::cout<<"Sort li by copying to vi: "<<std::fixed<<(double)(end-start)/CLOCKS_PER_SEC<<std::endl;
}