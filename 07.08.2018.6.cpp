//���� x<-1, y = 4.8*a-6*x+x^2
//���� x=-1, y = sqrt(17)-a
//���� x>-1, y = a * sin (x) + (abs(x)/x+1)

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    float x,a,y;

    cout<<"������� �������� \"�\": ";
    cin>>x;
    cout<<"������� �������� \"a\": ";
    cin>>a;

    x<-1? y = 4.8*a-6*x+pow(x,2): x==-1? y = sqrt(17)-a: x>-1? y = a*sin(x)+(abs(x)/(x+1)):0;

    cout<<"y = "<<y<<endl;
}
