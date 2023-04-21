#include<iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void ShowStruct(box x)
{
    using std::endl;
    std::cout<<"Name: "<<x.maker<<endl<<"Height: "<<x.height<<endl<<"Width: "<<x.width<<endl<<"Length: "<<x.length<<endl<<"Volume: "<<x.volume<<endl;
}
void WorkVol(box*px)
{
    px->volume=px->height+px->length+px->width;
    std::cout<<"Volume equals: "<<px->volume;
}
int main()
{
    using namespace std;
    box RedCube;
    cout<<"Enter structure name: ";cin>>RedCube.maker;
    cout<<"Enter structure height: ";cin>>RedCube.height;
    cout<<"Enter structure width: ";cin>>RedCube.width;
    cout<<"Enter structure length: ";cin >> RedCube.length;
    ShowStruct(RedCube);
    WorkVol(&RedCube);
}