#include <iostream>
#include <cmath>

using namespace std;

class triangle
{
private:
    float a,b,c;
public:
    float perimetr();
    float aria();
    float high(char ch);
    float mediana(char ch);
    float bissectris(char ch);
    float radiusin();
    float radiusout();
    void Typefirst();
    void Typesecond();

    triangle(float a2, float b2, float c2);
};

 triangle::triangle(float a2, float b2, float c2)
{
    a=a2;
    b=b2;
    c=c2;
}


float triangle::perimetr()
{
    return a+b+c;
}

float triangle::aria()
{
    float p = 0.5 * perimetr();
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

float triangle::high(char ch)
{
    switch(ch)
    {
    case 'a':
        {
           return 2*aria()/a;
        }
    case 'b':
        {
            return 2*aria()/b;
        }
    case 'c':
        {
            return 2*aria()/c;
        }
    }
}

float triangle::mediana(char ch)
{
    switch(ch)
    {
    case 'a':
        {
           return 0.5*sqrt(2*(pow(c,2)+pow(b,2))-pow(a,2));
        }
    case 'b':
        {
            return 0.5*sqrt(2*(pow(a,2)+pow(c,2))-pow(b,2));
        }
    case 'c':
        {
            return 0.5*sqrt(2*(pow(a,2)+pow(b,2))-pow(c,2));
        }
    }
}

float triangle::bissectris(char ch)
{
    switch(ch)
    {
    case 'a':
        {
           return sqrt(c*b*(a+b+c)*(c+b-a))/(c+b);
        }
    case 'b':
        {
            return sqrt(a*c*(a+b+c)*(a+c-b))/(a+c);
        }
    case 'c':
        {
            return sqrt(a*b*(a+b+c)*(a+b-c))/(a+b);
        }
    }
}

float triangle::radiusout()
{
    return a*b*c/(4*aria());
}

float triangle::radiusin()
{
    return 2*aria()/(a+b+c);
}

void triangle::Typefirst()
{
    if(a==b and a==c) cout<<"����������� ��������������"<<endl;
    else if(a==b or a==c or b==c) cout<<"����������� ��������������"<<endl;
    else cout<<"����������� ������������"<<endl;
}

void triangle::Typesecond()
{
    float Alpha = acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c))*180/3.14;
    float Betha = acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a))*180/3.14;
    float Gamma = acos((pow(c,2)+pow(a,2)-pow(b,2))/(2*a*c))*120/3.14;

    if(Alpha==90 or Betha==90 or Gamma==90) cout<<"������������� �����������"<<endl;
    if(Alpha>90 or Betha>90 or Gamma>90) cout<<"������������ �����������"<<endl;
    if(Alpha<90 or Betha<90 or Gamma<90) cout<<"������������� �����������"<<endl;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    char ch1;

    float a1, b1, c1;
    cout<<"������� ������ �������: ";
    cin>>a1;
    cout<<"������� ������ �������: ";
    cin>>b1;
    cout<<"������� ������ �������: ";
    cin>>c1;

    cout<<endl<<endl;
    triangle t(a1,b1,c1);

    cout<<"�������� ������������: "<<t.perimetr()<<endl;
    cout<<"������� ������������: "<<t.aria()<<endl<<endl;

    cout<<"������� �������: ";
    cin>>ch1;
    cout<<"������ ��������� �� ������� "<<ch1<<": "<<t.high(ch1)<<endl<<endl;

    cout<<"������� �������: ";
    cin>>ch1;
    cout<<"������� ��������� ���������� � ������� "<<ch1<<": "<<t.mediana(ch1)<<endl<<endl;

    cout<<"������� �������: ";
    cin>>ch1;
    cout<<"����������� ���� ������������, ���������������� ������� "<<ch1<<": "<<t.bissectris(ch1)<<endl<<endl;

    cout<<"������ ��������� ����������: "<<t.radiusout()<<endl;
    cout<<"������ ��������� ����������: "<<t.radiusin()<<endl;

    cout<<endl;
    t.Typefirst();
    t.Typesecond();
}
