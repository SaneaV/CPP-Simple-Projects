//� ���������� �������, �������� � ���������� � ��������� �� N
//�������� �������, ���� � ���������, ������ � �������

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL, "Russian");
    int n,i=0;
    cout<<"������� N: ";
    cin>> n;
    int *Array=new int[n];

    for (int i=0; i<n; i++)
    {
        cout<<"������� �����: ";
        cin>>Array[i];
    }
    int x[1000],y[1000],k=0,k1=0;
    for (int i=0;i<n;i++)
    {
        if (Array[i]%2==0) {x[k++]=Array[i];}
        else {y[k1++]=Array[i];}
    }
    for (int i=0;i<k;i++)
    {
        cout<<x[i]<<endl;
    }
    cout<<"\n\n";
    for (int i=0;i<k1;i++)
    {
        cout<<y[i]<<endl;
    }


}
