#include <iostream>

using namespace std;

template <class Type> class Calculator
{
private:
    Type a,b;
public:
    Calculator(Type a, Type b): a(0), b(0) {}

    Type input()
    {
        cout<<"������� ����� �: ";
        cin>>a;
        cout<<"������� ����� b: ";
        cin>>b;
    }

    Type show()
    {
        cout<<"a = "<<a<<"; b = "<<b;
    }

    Type PlusType()
    {
        return a+b;
    }

    Type MinusType()
    {
        return a-b;
    }

    Type UmnojType()
    {
        return a*b;
    }

    Type DelType()
    {
        return a/b;
    }
};



int main()
{
    setlocale(LC_ALL,"RUS");

    int Select;

    cout<<"1. �������� � int"<<endl;
    cout<<"2. �������� � float"<<endl;
    cout<<"3. �������� � char"<<endl;
    cin>>Select;

    if(Select==1)
    {
        Calculator <int> s1(0,0);
        s1.input();
        s1.show();

        cout<<endl;
        cout<<"�������� ��������: "<<s1.PlusType()<<endl;
        cout<<"�������� ����������: "<<s1.MinusType()<<endl;
        cout<<"�������� ���������: "<<s1.UmnojType()<<endl;
        cout<<"�������� �������: "<<s1.DelType()<<endl;
    }
    else if(Select==2)
    {
        Calculator <float> s1(0,0);
        s1.input();
        s1.show();

        cout<<endl;
        cout<<"�������� ��������: "<<s1.PlusType()<<endl;
        cout<<"�������� ����������: "<<s1.MinusType()<<endl;
        cout<<"�������� ���������: "<<s1.UmnojType()<<endl;
        cout<<"�������� �������: "<<s1.DelType()<<endl;
    }
    else if(Select==3)
    {
        Calculator <char> s1(0,0);
        s1.input();
        s1.show();

        cout<<endl;
        cout<<"�������� ��������: "<<s1.PlusType()<<endl;
        cout<<"�������� ����������: "<<s1.MinusType()<<endl;
        cout<<"�������� ���������: "<<s1.UmnojType()<<endl;
        cout<<"�������� �������: "<<s1.DelType()<<endl;
    }

    return 0;
}
