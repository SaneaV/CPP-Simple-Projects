//���� ������ ���������� N(1<=N<=1000) ������������ ���������.
//��������� ����� ����������� �� ������ ��������
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (0,"");
    cout<<"������� ���������� ����: ";
    int i, x[1000],pmax=0,n;
    cin>>n;
    if (n<0) n=abs(n);
    for (i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }
    int max=0;
    for (int i=1;i<n;i++)
    {
        if (abs(x[i])>=max) {max=abs(x[i]);pmax=i;}
    }
    cout<<"�����: "<<pmax;
}
