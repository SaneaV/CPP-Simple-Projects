//���� ����� a=1 b=2 c=3 d4
//��������� ����� ������.
//�������� ����� ��� ������ ������� � ��� ������ �������� ����� ����������.

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int Selection;
    cout<<"1. ������������ ���������� ������."<<endl;
    cout<<"2. ������������ ������ ����������."<<endl;
    do
    {
        cin>>Selection;
    }
    while(Selection>2 or Selection<1);

    system("cls");

    switch(Selection)
    {
    case 1:
    {
        float A[4];//������ �����
        float FirstLast;//��������� ���������� ��� ���������� ��������
        cout<<"������� ����� \"a\", \"b\", \"c\", \"d\": ";
        cin>>A[0]>>A[1]>>A[2]>>A[3];

        cout<<endl<<endl;

        cout<<"�� ����� ������: ";
        for(int i=0; i<4; i++)
        {
            cout<<A[i]<<" ";
        }

        for(int i=3; i>=0; i--)
        {
            if(i==3)
                FirstLast=A[i];

            A[i]=A[i-1];

            if(i==0)
                A[i]=FirstLast;
        }

        cout<<endl<<endl;
        cout<<"�������� ��� �������: ";
        for(int i=0; i<4; i++)
        {
            cout<<A[i]<<" ";
        }

        cout<<endl<<endl;

        break;
    }
    case 2:
    {
        float x,y,z,t;
        float c;

        cout<<"������� ����� \"a\", \"b\", \"c\", \"d\": ";
        cin>>x>>y>>z>>t;

        cout<<"���� �����: "<<x<<y<<z<<t<<endl<<endl;

        c=t;
        t=z;
        z=y;
        y=x;
        x=c;

        cout<<"�������� ���: "<<x<<y<<z<<t<<endl<<endl;

        break;
    }
    }

}
