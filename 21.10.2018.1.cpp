/*������ �������
������� ������ ������� ��������� - ���, ������� ������������ ��� ������� ��������� ������:
��� ����� ���� ����� �������, ��������� ����������� ����� ����� (�������).*/


#include <iostream>

using namespace std;

int Sdacha;
int Kolichestvo[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

bool ElementExist()
{
    if(Sdacha!=0)
        return true;
    return false;
}

void SelectElement()
{
    if(Sdacha>=1000)
    {
        Kolichestvo[8]++;
        Sdacha-=1000;
    }
    else if(Sdacha>=500)
    {
        Kolichestvo[7]++;
        Sdacha-=500;
    }
    else if(Sdacha>=200)
    {
        Kolichestvo[6]++;
        Sdacha-=200;
    }
    else if(Sdacha>=100)
    {
        Kolichestvo[5]++;
        Sdacha-=100;
    }
    else if(Sdacha>=50)
    {
        Kolichestvo[4]++;
        Sdacha-=50;
    }
    else if(Sdacha>=20)
    {
        Kolichestvo[3]++;
        Sdacha-=20;
    }
    else if(Sdacha>=10)
    {
        Kolichestvo[2]++;
        Sdacha-=10;
    }
    else if(Sdacha>=5)
    {
        Kolichestvo[1]++;
        Sdacha-=5;
    }
    else
    {
        Kolichestvo[0]++;
        Sdacha-=1;
    }

}

int main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ����� �����: ";
    cin>>Sdacha;

    while(ElementExist())
    {
        SelectElement();
    }

        if(Kolichestvo[0]!=0) cout<<"����� ��������� 1 ���: "<<Kolichestvo[0]<<endl;
        if(Kolichestvo[1]!=0) cout<<"����� ��������� 5 ���: "<<Kolichestvo[1]<<endl;
        if(Kolichestvo[2]!=0) cout<<"����� ��������� 10 ���: "<<Kolichestvo[2]<<endl;
        if(Kolichestvo[3]!=0) cout<<"����� ��������� 20 ���: "<<Kolichestvo[3]<<endl;
        if(Kolichestvo[4]!=0) cout<<"����� ��������� 50 ���: "<<Kolichestvo[4]<<endl;
        if(Kolichestvo[5]!=0) cout<<"����� ��������� 100 ���: "<<Kolichestvo[5]<<endl;
        if(Kolichestvo[6]!=0) cout<<"����� ��������� 200 ���: "<<Kolichestvo[6]<<endl;
        if(Kolichestvo[7]!=0) cout<<"����� ��������� 500 ���: "<<Kolichestvo[7]<<endl;
        if(Kolichestvo[8]!=0) cout<<"����� ��������� 1000 ���: "<<Kolichestvo[8]<<endl;

}
