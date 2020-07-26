#include <iostream>

using namespace std;

int main()
{
    string name;
    float Salary,Sale,Percent;

    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter Salary:";
    cin>>Salary;
    cout<<"Enter Sale:";
    cin>>Sale;
    cout>>"Enter commission Percent:";
    cin<<Percent;
    cout<<endl;

    cout<<"Your name ="<<name<<endl;
    cout<<"Total revenue:"<<Sale*(Percent/100)-Sale<<endl;

    return 0
}
