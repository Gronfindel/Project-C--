#include "iostream"
#include "cstdlib"
#include "ctime"
#include "Vect.cpp"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps=0;
    unsigned long long SummSteps=0;
    unsigned long MaxStep,MinStep,AverageStep;
    unsigned N;
    double target, dstep;
    cout<<"Enter starget distance(q to quit): ";
    while (cin>>target)
    {
        cout<<"Enter steps length: ";
        if(!(cin>>dstep))
        {
            break;
        }
        cout<<"Enter number of samples: ";cin>>N;
        MaxStep=0; MinStep=pow((target/dstep),2);
        for (unsigned i = 0; i < N; i++)
        {
            while (result.magval()<target)
            {
                direction=rand()%360;
                step.reset(dstep,direction,Vector::POL);
                result=result+step;steps++;
            }
            SummSteps+=steps;
            if (steps>MaxStep)MaxStep=steps;
            if (steps<MinStep)MinStep=steps;
            steps=0;
            result.reset(0.0,0.0);
        }
        // cout<<"After "<<steps<<" steps, the subject hasthe following location:\n"<<result<<endl;
        // result.polar_mode();
        cout<<"Real average number of steps for "<<N<<" samples = "<<SummSteps/N<<endl;
        cout<<"Arithmetic average number of steps for "<<N<<" samples = "<<pow((target/dstep),2)<<endl;
        cout<<"The maximum number of steps for "<<N<<" samples = "<<MaxStep<<endl;
        cout<<"The minimum number of steps for "<<N<<" samples = "<<MinStep<<endl;
        // cout<<"Average numbers of step: "<<
        // cout<<"or\n"<<result<<endl<<"Average outward distance per step = "<<result.magval()/steps<<endl;
        cout<<"Enter target distance (q to quit): ";
    }
    cout<<"Bye!\n"; cin.clear();
    while (cin.get()!='\n') continue;
    return 0;
}