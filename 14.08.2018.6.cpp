//�������� ���������, ������� � ������������������ ����� ����� ������� �� ����� ����������� ������������� �����
//� ������������ ������������� ����� �����. ��������� �������� �� ���� ����� �����, ���������� ��������� ����� ����������,
//������������������ ����� ������������� ������ ���� (���� � ������� ��������� �����, �� ������ � ������������������).
//���������� ����� �� ��������� 1000. ��������� ����� �� ������ �� ��������� 30000.


#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int A[1000];
    int i = 0;
    A[i] = 1;
    int n = 0;
    bool Finish = true;
    int min = INT_MAX;
    int TPON = 1;

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
            while(Finish)
            {
                while(abs(A[i]>30000))
                {
                    cout<<"������� �����: ";
                    cin>>A[i];
                    if(A[i]<0) TPON*=A[i];
                    if(A[i]<min and A[i]>0) min = A[i];
                }
                n++;
                if (A[i]==0)
                {
                    n--;
                    Finish = false;
                }
                i++;
            }
            cout<<"����������� ������������� �����: "<<min<<endl;
            cout<<"������������ ������������� �����: "<<TPON<<endl;
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
                    if(A[i]<0) TPON*=A[i];
                    if(A[i]<min and A[i]>0) min = A[i];

                }while(abs(A[i])>30000);

                n++;
                if (A[i]==0)
                {
                    n--;
                    Finish = false;
                }
                i++;

            }while(Finish);

           cout<<"����������� ������������� �����: "<<min<<endl;
            cout<<"������������ ������������� �����: "<<TPON<<endl;
            break;
        }
    case 3:
        {
            for(;Finish;)
            {
                for(;abs(A[i])>30000;)
                {
                    cout<<"������� �����: ";
                    cin>>A[i];
                    if(A[i]<0) TPON*=A[i];
                    if(A[i]<min and A[i]>0) min = A[i];
                }

                n++;
                if (A[i]==0)
                {
                    n--;
                    Finish = false;
                }
                i++;
            }
            cout<<"����������� ������������� �����: "<<min<<endl;
            cout<<"������������ ������������� �����: "<<TPON<<endl;
            break;
        }
        default:cout<<"������ �������� ���"<<endl;
    }
}

