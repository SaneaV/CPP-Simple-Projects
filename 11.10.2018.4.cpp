//���� ����� n (1<=n<=255).
//��������� ���������� ������� ����� �����: 3^n+4^n+7^n


#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");
    int n;

    cout<<"������� \"n\": ";
    cin>>n;

    int a,b;


    switch(n%4)
    {
    case 0:
    {
        a=1;
        cout<<"��������� ����� 1"<<endl;
        break;
    }
    case 1:
    {
        a=3;
        cout<<"��������� ����� 9"<<endl;
        break;
    }
    case 2:
    {
        a=9;
        cout<<"��������� ����� 7"<<endl;
        break;
    }
    case 3:
    {
        a=7;
        cout<<"��������� ����� 3"<<endl;
        break;
    }
    }

    switch (n%2)
    {
    case 0:
    {
        b=6;
        cout<<"��������� ����� 1"<<endl;
        break;
    }
    case 1:
    {
        b=4;
        cout<<"��������� ����� 9"<<endl;
        break;
    }
    }

    cout<<"S= "<<(a+b+5)%10;
}

