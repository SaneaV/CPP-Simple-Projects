//���������� �������� ����� � �������

#include <iostream>

using namespace std;

main()
{
    setlocale (LC_ALL,"Rus");
    cout<<"������� n: ";
    int n, a[20][20],m;
    cin>>n;
    cout<<"������� m: ";
    cin>>m;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {cout<<"������� �����: ";
        cin>>a[i][j];}
    }

    int k=0;
        for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {if (a[i][j]%2!=0) k++;}

    }

        for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        cout<<a[i][j]<<"\t";
        cout<<endl;
    }
    cout<<"\n\n\n���������� �������� �����: "<<k<<"\n\n";

}
