//�������� ���������, ������� � ������������������ ����� ����� ���������� �� ����������
//� ������������ ����� ������������� �����������, �� ������������� 344.
//��������� �������� �� ���� ����� �����, ���������� ��������� ����� ����������,
//������������������ ����� ������������� ������ ���� (���� � ������� ��������� �����,
//�� ������ � ������������������). ���������� ����� �� ��������� 1000. ��������� ����� �� ������ �� ��������� 30000.

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int A[1000];
    int i=0;
    int n=0;
    A[i]=1;
    int Sum=0;
    int k=0;
    bool Finish = true;

    int Select;

    cout<<"�������� ���� ��� ������� ������ ������: "<<endl;
    cout<<"1. While"<<endl;
    cout<<"2. Do..While"<<endl;
    cout<<"3. For"<<endl;
    cout<<"��� �����: ";
    cin>>Select;

    system("cls");

    switch(Select)
    {
    case 1:
    {
        while(Finish)
        {
            while(abs(A[i])>30000)
            {
                cout<<"������� �����: ";
                cin>>A[i];
                if (A[i]<=344 and A[i]%2==0 and A[i]!=0)
                {
                    Sum+=A[i];
                    k++;
                }
            }
            n++;

            if(A[i]==0)
            {
                n--;
                Finish=false;
            }
            i++;
        }
        cout<<"����� �����: "<<Sum<<endl;
        cout<<"���������� �����: "<<k<<endl;
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
                if (A[i]<=344 and A[i]%2==0 and A[i]!=0)
                {
                    Sum+=A[i];
                    k++;
                }
            }
            while(abs(A[i])>30000);

            n++;

            if(A[i]==0)
            {
                n--;
                Finish=false;
            }
            i++;
        }
        while(Finish);
        cout<<"����� �����: "<<Sum<<endl;
        cout<<"���������� �����: "<<k<<endl;
        break;
    }
    case 3:
    {
        for(; Finish;)
        {
            for(; abs(A[i])>30000;)
            {
                cout<<"������� �����: ";
                cin>>A[i];
                if (A[i]<=344 and A[i]%2==0 and A[i]!=0)
                {
                    Sum+=A[i];
                    k++;
                }

            }
            if(A[i]==0)
            {
                n--;
                Finish=false;
            }
            i++;
            n++;
        }
        cout<<"����� �����: "<<Sum<<endl;
        cout<<"���������� �����: "<<k<<endl;
        break;
    }
    default:
        cout<<"������ �������� ���"<<endl;
    }

}
