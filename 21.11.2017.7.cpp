//��� ������� � � �, ����������� �� � ������� �
#include <iostream>

using namespace std;

main()
{
    setlocale (0,"");
    int n=0,m=0,a[20][20],b[20][20],c[20][20];
    cout<<"������� N: ";
    cin>>n;
    cout<<"������� M: ";
    cin>>m;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>a[i][j];
        }
    }
    cout<<"\n\n��� ������ �������: \n\n"<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<"������� �����: ";
            cin>>b[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout<<c[i][j]<<"\t";
            cout<<endl;
    }
}
