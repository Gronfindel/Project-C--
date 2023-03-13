#include<iostream>
#include<string>
#include "dma.h"
int main()
{
    using namespace std;
    string temp;
    int rat;
    char option;
    accDMA *DMA[4];
    for (size_t i = 0; i < 4; i++)
    {
        cout<<"Enter DMA label: ";getline(cin,temp);
        cout<<"Enter DMA rating: ";cin>>rat;
        cout<<"Enter 1 for base DMA, 2 for lacksDMA, 3 for hasDMA: ";
        while (cin>>option&&(option!='1'&&option!='2'&&option!='3'))cout<<"Enter either 1 or 2, or 3"<<endl;
        cin.get();
        switch(option)
        {
        case '1':DMA[i]=new baseDMA(temp.data(),rat);
            break;
        
        case '2':{cout<<"Enter color: ";
                string colors;
                getline(cin,colors);
                DMA[i]=new lacksDMA(temp.data(),colors.data(),rat);}
            break;
        case '3':{cout<<"Enter style: ";
                string styler;
                getline(cin,styler);
                DMA[i]=new hasDMA(temp.data(),styler.data(),rat);}
            break;
        }
    }
    for (size_t i = 0; i < 4; i++)
    {
        DMA[i]->ViewAccDMA();
        delete DMA[i];
    }
    cout<<"Done.\n";
    return 0;    
}