//� ���������� �������, �������� � ���������� � ��������� �� N ������������ ��������
//�������� ���������, ������� �������� �������� ������� ������ �������� �� ����������� �������� ������� � �������

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

    for (int i=0; i<n;i++)
    {
       cout<<"������� �����: ";
       cin>>Array[i];
    }
    int min=Array[i];
    for (int i=0;i<n;i++)
    {
        if (Array[i]<min) min=Array[i];
    }
    for (int i=0;i<n;i+=4)
    {
        Array[i]=min;
    }
    for (int i=0;i<n;i++)
    {
        cout<<Array[i]<<endl;
    }
    }
