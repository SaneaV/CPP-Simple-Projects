//�������� ���������, ������� � ������������������ ����� ����� ������� �� ����� ��� ������ �����, ������� ������ .
//��������� �������� �� ���� ����� �����, ���������� ��������� ����� ����������,
//������������������ ����� ������������� ������ ���� (���� � ������� ��������� �����, �� ������ � ������������������).
//���������� ����� �� ��������� 1000. ��������� ����� �� ������ �� ��������� 30000.

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL,"RUS");

    int A[1000];
    int Select;

    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1. While"<<endl;
    cout<<"2. Do...While"<<endl;
    cout<<"3. For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    int i=0;
    int x=0;
    int n=0;

    switch(Select)
    {
    case 1:
    {
        while (x!=1)
        {
            do
            {
                cout<<"������� �����: ";
                cin>>A[i];
            }
            while (abs(A[i]>30000));

            n++;

            if (A[i]==0)
            {
                x=1;
                n--;
            }
            i++;

        }

        i=0;
        system("cls");

        while (i<n)
        {
            if (A[i]%2==0 and A[i]%9==0)
                cout<<A[i]<<endl;
            i++;
        }
        break;
    }
    case 2:
    {
        do
        {
            do
            {
                cout<<"������� �����: ";
                cin>>A[i];
            }
            while (abs(A[i]>30000));

            n++;

            if (A[i]==0)
            {
                x=1;
                n--;
            }
            i++;
        }
        while(x!=1);

        i=0;
        system("cls");

        while (i<n)
        {
            if (A[i]%2==0 and A[i]%9==0)
                cout<<A[i]<<endl;
            i++;
        }
        break;
    }
    case 3:
    {
        for (;x!=1;n++,i++)
        {
            do
            {
                cout<<"������� �����: ";
                cin>>A[i];
            }
            while (abs(A[i]>30000));

            if (A[i]==0)
            {
                x=1;
                n--;
            }


        }

        i=0;
        system("cls");

        while (i<n)
        {
            if (A[i]%2==0 and A[i]%9==0)
                cout<<A[i]<<endl;
            i++;
        }
        break;
    }

    default:cout<<"������ ������� ���"<<endl;


    }
}
