//�������� ���������, ������� � ������������������ ����� ����� ���������� ����� ������������� �����, ������� ������.
//��������� �������� �� ���� ����� �����, ���������� ��������� ����� ����������, ������������������ ����� ������������� ������ ����
//(���� � ������� ��������� �����, �� ������ � ������������������).
//���������� ����� �� ��������� 1000. ��������� ����� �� ������ �� ��������� 30000.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale (0, "");

    int x = 0;
    int summ = 0;
    int k=0;

    cout << "�������: \n[1] ��� :for: \n[2] ��� :while:\n[3] ��� :do while:"<<endl;
    cin >> x;
    switch(x)
    {
    case(1):
    {
        cout<<"�� ������� �������� ����� for"<<endl;
        for(; x!=0 and k<1000 and x<abs(30000); )
        {
            cout<<"�������� �����:"<<endl;
            cin>>x;
            if(x>0 and x%9==0) summ+=x;
            k++;
        }
        cout <<"����� ����� ������� ������ = "<< summ;
        break;
    }

    case(2):
    {
        cout<<"�� ������� �������� ����� while"<<endl;
        while(x!=0 and k<1000 and x<abs(30000))
        {
            cout<<"�������� �����:"<<endl;
            cin >> x;
            if(x>0 and x%9==0) summ+=x;
            k++;
        }
        cout<<"����� ����� ������� ������ = "<<summ;
        break;
    }

    case(3):
    {
        cout<<"�� ������� �������� ����� do-while"<<endl;
        do
        {
            cout<<"�������� �����:"<<endl;
            cin >> x;
            if(x>0 and x%9==0) summ+=x;
            k++;

        }
        while(x!=0 and k<1000 and x<abs(30000));
        cout <<"����� ����� ������� ������ = "<<summ;
        break;
    }

    default:
        cout<<"������ 3 ��������� �����.";

    }
}