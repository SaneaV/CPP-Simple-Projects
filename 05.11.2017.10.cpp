//������������ ������ ������ ����, x � b.
//���� x<b
//y=4*pow(x,2)-5*x-10;

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
    int x,b,a,y=0,h;
    cout<<"������� ������ ����: ";
    cin>>h;
    cout<<"������ x: ";
    cin>>x;
    cout<<"������ b: ";
    cin>>b;
    do
    {
        y=4*pow(x,2)-5*x-10;
        cout<<"x= "<<x<<" y= "<<y<<"\n";
        x=x+h;
    }while(x<b);

}
