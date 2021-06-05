#include <iostream>
#include <cmath>

using namespace std;

class trapec
{
private:
    float a,b,c,d;
public:
    float perimetr();
    float diagonali1();
    float diagonali2();
    float high();
    float aria();

    trapec(float a2, float b2, float c2, float d2);
};

 trapec::trapec(float a2, float b2, float c2, float d2)
{
    a=a2;
    b=b2;
    c=c2;
    d=d2;
}

float trapec::perimetr()
{
    return a+b+c+d;
}

float trapec::diagonali1()
{
    return sqrt((d*d+a*b)-(a*(d*d-c*c))/(a-b));
}

float trapec::diagonali2()
{
    return sqrt(pow(c,2)+a*b-(a*(pow(c,2)-pow(d,2)))/(a-b));
}

float trapec::high()
{
    return sqrt(c*c-pow((pow((a-b),2)+pow(c,2)-pow(d,2))/(2*(a-b)),2));
}

float trapec::aria()
{
    return ((a+b)/2)*high();
}


int main()
{
    setlocale(LC_ALL,"RUS");

    float a3,b3,c3,d3;

    cout<<"������� ������ �������: ";
    cin>>a3;
    cout<<"������� ������ �������: ";
    cin>>b3;
    cout<<"������� ������ �������: ";
    cin>>c3;
    cout<<"������� �������� �������: ";
    cin>>d3;

    trapec t(a3,b3,c3,d3);

    cout<<endl<<"�������� ��������: "<<t.perimetr()<<endl;
    cout<<endl<<"����� ������ ���������: "<<t.diagonali1()<<endl;
    cout<<endl<<"����� ������ ���������: "<<t.diagonali2()<<endl;
    cout<<endl<<"������ ��������: "<<t.high()<<endl;
    cout<<endl<<"������� ��������: "<<t.aria()<<endl;


}

