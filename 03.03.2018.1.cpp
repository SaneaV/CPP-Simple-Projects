//���������� ������������ ������. �������� ������� ������������ � ����������� �����.

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL,"RUS");

    cout<<"������� ���������� ���������: ";
    int n;
    cin>>n;

    int *x1 = new int [n];

    int pmax=0,pmin=0;
    int max1=1, min1=100;

    for (int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x1[i];

        if (x1[i]<=min1) {pmin=i;min1=x1[i];}
        if (x1[i]>=max1) {pmax=i;max1=x1[i];}
    }



    for (int i=0;i<n;i++)
    {
        if (pmin==i) {x1[i]=max1;}
        if (pmax==i) {x1[i]=min1;}
    }


    for (int i=0;i<n;i++)
        cout<<x1[i]<<" ";

    delete []x1;
}
