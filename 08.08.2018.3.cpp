//�������� ���������, ������� � ������������������ ����� ����� ������� �� ����� ������������ �����, ������� ���� � ����������.
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
    int i = 0 ;
    int n = 0;
    A[i] = 1;
    int max=0;
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
            while(abs(A[i]>30000))
            {
                cout<<"������� �����: ";
                cin>>A[i];
                if (A[i]==0)
                {
                    Finish=false;
                    n--;
                }
            }
            if(A[i]>max and A[i]%13==0 and A[i]%5==0)
                max = A[i];
            i++;
            n++;
        }
        cout<<"������������ ����� ������� 5 � 13: "<<max;
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
                if (A[i]==0)
                {
                    Finish=false;
                    n--;
                }
            }
            while(abs(A[i]>30000));

            if(A[i]>max and A[i]%13==0 and A[i]%5==0)
                max = A[i];
            i++;
            n++;
        }
        while(Finish);
        cout<<"������������ ����� ������� 5 � 13: "<<max;
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
                if (A[i]==0)
                {
                    Finish=false;
                    n--;
                }
            }
            if(A[i]>max and A[i]%13==0 and A[i]%5==0)
                max = A[i];
            i++;
            n++;
        }
        cout<<"������������ ����� ������� 5 � 13: "<<max;
        break;
    }
    default: cout<<"������ �������� �� ����������."<<endl;
    }
}
