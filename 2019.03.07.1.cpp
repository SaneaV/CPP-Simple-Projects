#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class publication
{
private:
    string BookName;
    float price;
public:
    virtual void getdata()
    {
        cout<<"������� �������� ����������: ";
        cin>>BookName;
        cout<<"������� ��������� ����������: ";
        cin>>price;
    }

    virtual void putdata()
    {
        cout<<"�������� �����: "<<BookName<<" - ��������� - "<<price<<endl;
    }

    virtual bool isOveersize() = 0;
};

class sales
{
private:
    float Massive[2];
public:
    void getdata()
    {
        cout<<"������� ����� ������ �� ������ �����: ";
        cin>>Massive[0];
        cout<<"������� ����� ������ �� ������ �����: ";
        cin>>Massive[1];
        cout<<"������� ����� ������ �� ������ �����: ";
        cin>>Massive[2];
    }
    void putdata()
    {
        cout<<"����� ������ �� ������ �����: "<<Massive[0]<<endl;
        cout<<"����� ������ �� ������ �����: "<<Massive[1]<<endl;
        cout<<"����� ������ �� ������ �����: "<<Massive[2]<<endl;
    }
};



class book : public publication, public sales
{
public:
    int NumberOfPages=0;
    void getdata()
    {
        publication::getdata();
        cout<<"������� ���������� �������: ";
        cin>>NumberOfPages;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"���������� ������� � ����� �����: "<<NumberOfPages<<endl;
        sales::putdata();
    }
    bool isOveersize()
    {
        return (NumberOfPages >= 800) ? true : false;
    }
};

class tape : public publication, public sales
{
private:
    int AudioDuration=0;
    void getdata()
    {
        publication::getdata();
        cout<<"������� ����������������� �����-������ �����: ";
        cin>>AudioDuration;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"����������������� �����-������ �����: "<<AudioDuration<<endl;
        sales::putdata();
    }

    bool isOveersize()
    {
        return (AudioDuration >= 90) ? true : false;
    }

};

class disk : public publication, public sales
{
private:
    char Type;
    float Size=0;
public:
    void getdata()
    {
        publication::getdata();
        cout<<"������� �������� �������� CD(c) ��� DVD(d): ";
        cin>>Type;
        cout<<"������� ������ ��������(GB): ";
        cin>>Size;
        sales::getdata();
    }
    void putdata()
    {
        publication::putdata();
        cout<<"���������� ��������: ";
        if(Type=='c')
            cout<<"CD";
        else
            cout<<"DVD";
        sales::putdata();
    }
    bool isOveersize()
    {
        return (Size >= 5) ? true : false;
    }


};


int main()
{
    setlocale(LC_ALL,"RUS");

    publication *pubarr[100];
    int n=0;
    bool Menu = true;
    char Select;

    do
    {
        cout<<"������� �����(b) "<<endl;
        cout<<"������� �����-������(a)"<<endl;
        cout<<"������ �� ����(d)"<<endl;
        cout<<"����� �� ��������� (x)"<<endl;
        cout<<"��� �����: ";
        cin>>Select;


        switch(Select)
        {
        case 'b':
        {
                cout<<endl;
                pubarr[n] = new book;
                break;
        }
        case 'a':
        {
            cout<<endl;
            pubarr[n] = new tape;
            break;
        }
        case 'd':
        {
            cout<<endl;
            pubarr[n] = new disk;
            break;
        }
        case 'x':
        {
            Menu = false;
            break;
        }
        default:
        {
            cout<<"��������� ����."<<endl;
        }
        }

        if(Menu)
        {
            pubarr[n++]->getdata();
        }

        system("cls");

    }
    while(Menu);

    system("cls");

    for(int i=0; i<n; i++)
    {
        pubarr[i]->putdata();
        if(pubarr[i]->isOveersize())
            cout<<endl<<"���������� �������!"<<endl;
        cout<<endl;
    }
}
