//� ���������� �������, �������� � ���������� � ��������� �� N
//�������� ���������, ������� ������� ��� ���� �� �������

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
    while (i<n)
    {
        if (Array[i]==0)
        {
            for (int j=i; j<n; j++)
            {
                Array[j]=Array[j+1];
            }
            n--;
        }
        else i++;
    }
    for (int i=0; i<n; i++)
    {
        cout<<Array[i]<<endl;
    }
}
