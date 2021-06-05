//� ���������� �������, �������� � ���������� � ��������� �� N ������������ ���������,
//��������� ���������� ������ ��������� �� ������ �������� (������������ ����������� ������� ��� ����������).

#include <iostream>

using namespace std;

void InputArray(float *x, int n)
{
    if(n==1)
    {
        cout<<"������� �������: ";
        cin>>x[0];
    }
    else
    {
        InputArray(x,n-1);
        cout<<"������� �������: ";
        cin>>x[n-1];
    }
}


void ShowArray (float *x, int n)
{
    if (n==1)
        cout<<x[0]<<" ";
    else
    {
        ShowArray(x,n-1);
        cout<<x[n-1]<<" ";
    }
}

int Even(float *x, int n)
{
    //� �++ ������ ��������� �������� ������������� �����
    //�������������: A=B/1
    int A = x[n-1]/1;
    if(n==0) return 0;
    else if (A%2==0 and n%2==0) return Even(x,n-1)+1;
    else return Even(x,n-1);
}


int main()
{
    setlocale(LC_ALL,"RUS");

    int m;
    cout<<"������� ���������� ��������� �������: ";
    while (!(cin>>m) or m<=0)//������ �������� � ���� ��� �� �����, ���������� ���� (! - not)
    {
        cout<<"������, �� ����� ���-�� �� ��.\n ";
        cin.clear();//������� �����
        cin.sync();//������� ������ �� �������
        cout<<"\n��������� ����: ";
    }
    float *Array = new float [m];


    cout<<endl;
    InputArray(Array,m);
    cout<<endl;
    ShowArray(Array,m);
    cout<<endl<<"���������� ������ ��������� �� ������ ��������: "<<Even(Array,m);
}
