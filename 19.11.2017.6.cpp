//���� ������ ���������� N(1<=N<=1000) ������������ ���������.
//��������� c���� ������� �������������� ����� ������� �������������� ��������.
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (0,"");
    cout<<"������� ���������� ����: ";
    int i, x[1000],n,pol=0,S=0;
    cin>>n;
    if (n<0) n=abs(n);
    for (i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }
    for (i=0;i<n;i++)
    {
        if (x[i]>=0) {pol=i;break;}

    }
    for (i=pol+1;i<n;i++)
    {
        S+=x[i];
    }cout<<S;
}
