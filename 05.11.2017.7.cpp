//������������ ������ ������ ����, x � b.
//���� x<b
//y=5*x*3-2*x+1;

#include <iostream>

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
        y=5*x*3-2*x+1;
        cout<<"x= "<<x<<" y= "<<y<<"\n";
        x=x+h;
    }while(x<b);

}
