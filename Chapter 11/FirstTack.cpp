#include<iostream>
#include<cstdlib>
#include"Vect.cpp"
#include<ctime>
#include<fstream>// для файлового ввода вывода
int main()
{
    using namespace std;
    using VECTOR::Vector;
    ofstream outFile;
    string FileName;
    cout<<"Enter name File: ";getline(cin,FileName);
    outFile.open(FileName);
    if(!outFile.is_open())
    {
        cout<<"Could not open the file "<<FileName<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps=0;
    double target;
    double dstep;
    cout<<"Enter target distance(q to quit): ";
    while (cin>>target)
    {
        cout<<"Enter step length: ";
        if (!(cin>>dstep))
            break;
        outFile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        outFile << steps << ": " << result << endl;
        while (result.magval()<target)
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vector::POL);
            result = result + step;
            steps++;
            outFile << steps << ": " << result << endl;
        }
        outFile<<"After "<<steps<<" steps, the subject has the following location:\n";
        outFile<<result<<endl;
        result.polar_mode();
        outFile<<" or\n"<<result<<endl;
        outFile << "Average outward distance per step = " << result.magval() / steps << endl;
        steps=0;
        result.reset(0.0,0.0);
        cout<<"Enter target distance (q to quit):";
    }
    cout<<"Bye!!!\n";
    outFile.close();
    cin.clear();
    while(cin.get()!='\n')
    continue;
    return 0;       
}