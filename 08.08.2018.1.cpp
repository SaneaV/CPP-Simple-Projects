//�������� ���������, ������� � ������������������ ����� ����� ������� �� ����� ������������ ������ �����, ������� ������ .
//��������� �������� �� ���� ����� �����, ���������� ��������� ����� ����������, ������������������ ����� ������������� ������ ����
//(���� � ������� ��������� �����, �� ������ � ������������������).
//���������� ����� �� ��������� 1000. ��������� ����� �� ������ �� ��������� 30000

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int A[1000];
    int x;
    bool Finish = true;
    int i=0;
    int n=0;
    int max=0;

    A[i] = 1;

    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1. While"<<endl;
    cout<<"2. Do..While"<<endl;
    cout<<"3. For"<<endl;
    cout<<"��� �����: ";
    cin>>x;

    system("cls");

    switch(x)
    {
    case 1:
    {
        while (Finish)
        {
            while(abs(A[i])>30000)
            {
                cout<<"������� �����: ";
                cin>>A[i];
            }
            if (A[i]==0)
            {
                n--;
                Finish=false;
            }

            if (A[i]>max and A[i]%9==0 and A[i]%2==0)
                max = A[i];

            n++;
            i++;
        }
        system("cls");
        cout<<"������������ ������ �����, ������� ������: "<<max;
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
            while(abs(A[i])>30000);

            if (A[i]==0)
            {
                n--;
                Finish=false;
            }

            if (A[i]>max and A[i]%9==0 and A[i]%2==0)
                max = A[i];

            n++;
            i++;
        }
        while(Finish);

        system("cls");

        cout<<"������������ ������ �����, ������� ������: "<<max;
        break;
    }
    case 3:
    {
        for(; Finish; i++,n++)
        {
            for(; abs(A[i])>30000;)
            {
                cout<<"������� �����: ";
                cin>>A[i];
            }

            if (A[i]==0)
            {
                n--;
                Finish=false;
            }

            if (A[i]>max and A[i]%9==0 and A[i]%2==0)
                max = A[i];

        }
        system("cls");
        cout<<"������������ ������ �����, ������� ������: "<<max;
        break;
    }
    default:
        cout<<"������ �������� �� ����������."<<endl;
    }

}
