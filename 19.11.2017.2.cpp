//� ���������� �������, �������� � ���������� � ��������� �� N (1<=N<=1000) ������������ ���������,
//��������� ����� ������� ��������� �������, ������������� ����� ������������ �� ������ ��������
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (0,"");
    cout<<"������� ���������� ����: ";
    int i,n, S=0, x[1000],m=0,pmin=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
    cout<<"������� �����: ";
    cin>>x[i];
    }
    int min=abs(x[i]);
    for (int i=1;i<n;i++)
    {
        if (abs(x[i])<=min) {min=abs(x[i]);pmin=i;}
    }
    for (int i=pmin+1;i<n;i++)
    {
        S+=abs(x[i]);
    }
    cout<<"�����: "<<S;
}
