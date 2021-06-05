#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>

using namespace std;

class Figures
{
public:
    string Name;
    Figures(string Name)
    {
        this->Name=Name;
    }
};

class Circle : public Figures
{
private:
    int r;
public:
    void Input()
    {
        cout<<"������� ������: ";
        cin>>r;
    }
    float Aria()
    {
        return 3.14 * r *r;
    }
    float Perimetr()
    {
        return 3.14 * 2 *r;
    }
    void Show()
    {
        cout<<"�������� ������: "<<Name<<endl;
        cout<<"������ ����������: "<<r<<endl;
        cout<<"������� ����������: "<<Aria()<<endl;
        cout<<"�������� ����������: "<<Perimetr()<<endl;
    }

    Circle() : Figures("Okrujnosti")
    {
        this->r=r;
    }
};

class Triangle : public Figures
{
private:
    int a,b,c;
public:
    void Input()
    {
        cout<<"������� ��� �������: ";
        cin>>a>>b>>c;
    }
    float Aria()
    {
        float p = (a+b+c)/2.0;

        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    float Perimetr()
    {
        return a+b+c;
    }
    void Show()
    {
        cout<<"�������� ������: "<<Name<<endl;
        cout<<"������� ������������: "<<a<<" "<<b<<" "<<c<<endl;
        cout<<"������� ������������: "<<Aria()<<endl;
        cout<<"�������� ������������: "<<Perimetr()<<endl;
    }

    Triangle () : Figures("Triangle")
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

};

class Parallelogram : public Figures
{
private:
    int a,b, alpha;
public:
    void Input()
    {
        cout<<"������� ��� ������� � ����: ";
        cin>>a>>b>>alpha;
    }
    float Aria()
    {
        return a*b*sin(alpha);
    }
    float Perimetr()
    {
        return 2*(a+b);
    }
    void Show()
    {
        cout<<"�������� ������: "<<Name<<endl;
        cout<<"������� ���������������: "<<a<<" "<<b<<" "<<alpha<<endl;
        cout<<"������� ���������������: "<<Aria()<<endl;
        cout<<"�������� ���������������: "<<Perimetr()<<endl;
    }

    Parallelogram () : Figures("Paralellogram")
    {
        this->a=a;
        this->b=b;
        this->alpha=alpha;
    }

};

class Priamougolnik : public Figures
{
private:
    int a,b;
public:
    void Input()
    {
        cout<<"������� ������: ";
        cin>>r;
    }
    float Aria()
    {
        return 3.14 * r *r;
    }
    float Perimetr()
    {
        return 3.14 * 2 *r;
    }
    void Show()
    {
        cout<<"�������� ������: "<<Name<<endl;
        cout<<"������� ��������������: "<<a<<" "<<b<<"90"<<endl;
        cout<<"������� ��������������: "<<Aria()<<endl;
        cout<<"�������� ��������������: "<<Perimetr()<<endl;
    }

    Priamougolnik() : Figures("Priamougolnik")
    {
        this->r=r;
    }
};


int main()
{
    setlocale(LC_ALL,"RUS");

    while(true)
    {
        cout<<"1. �������� ��� �����������."<<endl;
        cout<<"2. �������� ��� �������������."<<endl;
        cout<<"3. �������� ��� ���������������."<<endl;
        cout<<"4. �������� ��� ������."<<endl;
        cout<<"5. �������� ��� ���������������."<<endl;
        cout<<"6. �������� ��� ���������."<<endl;
        cout<<"��� �����: ";

        if(_kbhit)
        {
            switch(getch())
            {
            case '1':
            {
                system("cls");
                Circle O;

                O.Input();
                O.Show();
                cout<<endl<<endl;


                break;
            }
            case '2':
            {
                system("cls");
                Triangle T;
                T.Input();
                T.Show();

                cout<<endl<<endl;
                break;
            }
            case '3':
            {
                system("cls");
                Parallelogram P;
                P.Input();
                P.Show();

                cout<<endl<<endl;
                break;
            }
            }
        }
    }


}
