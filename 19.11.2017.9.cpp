//���� ������ ���������� N(1<=N<=1000) ������������ ���������.
//�������� ���������, ���������� �� ����� �� ���� ������� ����� ��� �������� �������
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (0,"");
    cout<<"������� ���������� ����: ";
    int i, x[1000],n,t=0;
    cin>>n;
    if (n<0) n=abs(n);
    for (i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }
    t=x[0];
    for (i=0;i<n;i++)
    {
        x[n]=t;
        x[i]=x[i+1];
        cout<<x[i]<<endl;
    }


}
