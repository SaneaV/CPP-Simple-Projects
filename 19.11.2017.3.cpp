//���� ������ ���������� N(1<=N<=1000) ����� ���������.
//�������� ���������, ������� �������� �������� ������� �������������� �������� �� 1 ������� ������������ �������� �� -1
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (0,"");
    cout<<"������� ���������� ����: ";
    int i,n, S=0, x[1000];
    cin>>n;
    if (n<0) n=abs(n);
    for (i=0;i<n;i++)
    {
    cout<<"������� �����: ";
    cin>>x[i];
    }
     for (i=0;i<n;i++)
     {
    if (x[i]>0 or x[i]==0) {x[i]=1; cout<<x[i]<<endl;}
    else if (x[i]<0) {x[i]=-1; cout<<x[i]<<endl;}
     }
}
