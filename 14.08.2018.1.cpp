//���� ����������� ����� n � ����� c. ������� ��� ����������� ����� c ��� ��������� ������� ����, � ������� n �������?

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int c,n;

    cout<<"������� ���������� �������: ";
    cin>>n;

    cout<<"������� �����, ������� ����� ������: ";
    cin>>c;

    system("cls");

    int Select;
    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1.While"<<endl;
    cout<<"2.Do...While"<<endl;
    cout<<"3.For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    int i=1;
    bool checkb = true;
    int k=0;
    int Remember = 0;

    system("cls");

    switch(Select)
    {
    case 1:
    {
        while(Remember<=n)
        {
            checkb = true;
            i = Remember;

            while(checkb)
            {
                if (i%10==c and i!=0)
                    k++;
                if (i==0)
                    checkb = false;
                else
                {
                    i/=10;
                }

            }
            Remember++;

        }
        cout<<"����� "<<c<<" �����������: "<<k<<" ���"<<endl;
        break;
    }
    case 2:
    {
        do
        {
            checkb = true;
            i = Remember;
            do
            {
                if (i%10==c and i!=0)
                    k++;
                if (i==0)
                    checkb = false;
                else
                {
                    i/=10;
                }

            }
            while(checkb);
            Remember++;

        }
        while(Remember<=n);
        cout<<"����� "<<c<<" �����������: "<<k<<" ���"<<endl;
        break;
    }
    case 3:
    {
        for(; Remember<=n; Remember++)
        {
            checkb = true;
            i = Remember;
            for(; checkb;)
            {
                if (i%10==c and i!=0)
                    k++;
                if (i==0)
                    checkb = false;
                else
                {
                    i/=10;
                }
            }
        }
        cout<<"����� "<<c<<" �����������: "<<k<<" ���"<<endl;
        break;
    }
    default: cout<<"������ �������� ���."<<endl;
    }
}
