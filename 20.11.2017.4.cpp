//� ���������� �������, �������� � ���������� � ��������� �� N
//��������� ������������ ���������� � ������ �������

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
    int S=1;
    for (int i=2;i<n;i+=2)
    {
        S*=Array[i];
    }
        for (int i=2;i<n;i+=2)
    {
        Array[i]=S;
    }
    for (int i=0;i<n;i++)
    {
        cout<<Array[i]<<endl;
    }

}
