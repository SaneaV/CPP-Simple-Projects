//���� ������ ���������� N(1<=N<=1000) ������������ ���������.
//�������� ���������, ������� �������� �������� ������� ������� �������� �� ������������, ������� � �������.
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    setlocale (0,"");
    cout<<"������� ���������� ����: ";
    int i, x[1000],n;
    cin>>n;
    if (n<0) n=abs(n);
    for (i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }
    int max=INT_MIN;
    for (int i=0; i<n; i++)
    {
        if  (x[i]>=max) max=(x[i]);
    }
    for (int i=0; i<n; i+=2)
    {
        x[i] = max;
    }
    for (int i=0; i<n; i++)
    {
        cout<<x[i]<<endl;
    }

}
