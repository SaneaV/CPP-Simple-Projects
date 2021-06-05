#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class Product
{
private:
    string Name;
    int Price;
    int Weight;
    char Units;
public:
    virtual void Get_Data()
    {
        cout<<"������� �������� ������: ";
        cin>>Name;
        cout<<"������� ����: ";
        cin>>Price;
        cout<<"������� ������� ���������(l - �����, w - �����, k - ����������) : ";
        cin>>Units;

        if(Units=='l')
        {
            cout<<"������� �����: ";
            cin>>Weight;
        }
        else if (Units=='w')
        {
            cout<<"������� ���������� ����: ";
            cin>>Weight;
        }
        else if (Units=='k')
        {
            cout<<"������� ���: ";
            cin>>Weight;
        }
    }

    virtual void Set_Data()
    {
        cout<<"�������� ������: "<<Name<<endl;
        cout<<"���� ������: "<<Price<<endl;
        if(Units=='l')
        {
            cout<<"�����: "<<Weight<<" ������"<<endl;
        }
        else if (Units=='w')
        {
            cout<<"����������: "<<Weight<<" ����"<<endl;
        }
        else if (Units=='k')
        {
            cout<<"���: "<<Weight<<" ���������"<<endl;
        }

    }
};

class Buy : public Product
{
private:
    int dd, mm, yyyy;
public:
    void Get_Data()
    {
        Product::Get_Data();
        char l;
        cout<<"������� ���� ������� (dd.mm.yyyy): ";
        cin>>dd>>l>>mm>>l>>yyyy;
    }

    void Set_Data()
    {
        Product::Set_Data();
        cout<<"���� ������� ������: "<<dd<<"."<<mm<<"."<<yyyy<<endl;
    }

};

class Check : public Buy
{
public:
    void Set_Data()
    {
        Buy::Set_Data();
    }

};



int main()
{
    setlocale (LC_ALL,"RUS");

    Product *Prod[100];
    int n=0;
    bool Menu = true;

    while(Menu)
    {
        cout<<"1. ������� �������. "<<endl;
        cout<<"2. ������� ���������� � ������ � ��������. "<<endl;
        cout<<"3. ����� �� ���������."<<endl;

        if(_kbhit)
        {
            switch(getch())
            {
            case '1':
            {
                cout<<endl;
                Prod[n] = new Buy;

                Prod[n++]->Get_Data();

                break;
            }
            case '2':
            {
                cout<<endl;
                for(int i=0; i<n; i++)
                {
                    Prod[i]->Set_Data();
                    cout<<endl;
                }

                getch();

                break;
            }
            case '3':
            {
                Menu = false;
                break;
            }
            }

            system("cls");
        }

    }
}
