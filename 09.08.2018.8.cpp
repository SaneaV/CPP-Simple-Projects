//���������� ����� �� 1 �� 1000, � �������� ������������ ����� ���������.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int i=1;
    int j=1;
    int k=0;
    int t=0;
    int max=0;

    int Select;
    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1.While"<<endl;
    cout<<"2.Do...While"<<endl;
    cout<<"3.For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    system("cls");

    switch(Select)
    {
    case 1:
    {
        while(i<=1000)
        {
            i++;
            j=1;
            k=0;
            while(j<=1000)
            {
                if(i%j==0)
                {
                    k++;
                }
                j++;

            }
            if (k>max)
            {
                max=k;
                t=i;
            }
        }
        cout<<"����� �� 1 �� 1000, � �������� ������ ����� ���������: "<<t<<endl;
        break;
    }
    case 2:
    {
        do
        {
            i++;
            do
            {
                if(i%j==0)
                {
                    k++;
                }
                j++;
            }
            while(j<=1000);
            if (k>max)
            {
                max=k;
                t=i;
            }
            j=1;
            k=0;
        }
        while(i<=1000);

        cout<<"����� �� 1 �� 1000, � �������� ������ ����� ���������: "<<t<<endl;
        break;
    }
    case 3:
    {
        for(i=1; i<=1000; i++)
        {
            j=1;
            k=0;
            for(; j<=1000; j++)
            {
                if(i%j==0)
                {
                    k++;
                }
            }
            if (k>max)
            {
                max=k;
                t=i;
            }
        }
        cout<<"����� �� 1 �� 1000, � �������� ������ ����� ���������: "<<t<<endl;
        break;
    }
    default:
        cout<<"������ �������� ���"<<endl;
    }
}
