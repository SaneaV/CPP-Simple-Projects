//���� x<=0, y = (a^2-b^2/a^2+b^2-1)+1
//���� 0<x<2, y = sin(a+b)+|x-a|
//���� x>=2, y = sqrt(a^2+b^2+3)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    float a,b,x,y;

    cout<<"������� �������� \"x\": ";
    cin>>x;
    cout<<"������� �������� \"�\": ";
    cin>>a;
    cout<<"������� �������� \"b\": ";
    cin>>b;

    x<=0? y = (pow(a,2) - pow (b,2)) / (pow(a,2) + pow(b,2) - 1) + 1: 0<x and x<2? y = sin(a+b) + abs(x-a): x>=2? y = sqrt(pow(a,2)+pow(b,2)+3):0;


    cout<<"y = "<<y<<endl;
}
