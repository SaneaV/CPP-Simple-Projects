//���� ������� �, �������� ������� ������� �� ��������� (p,q)

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, "rus");
    int a[20][20],n,m;
    int i,j,p,q;

    cout << "������� ���������� �����: ";
    cin >> n;
    cout << "������� ���������� ��������: ";
    cin >> m;
    cout << "������� q: ";
    cin >> q;
    cout << "������� p: ";
    cin >> p;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            cout<<"������� �����: ";
            cin>>a[i][j];
        }
    }

    for ( i = 0; i < n; i++)  // ������� �������� �������
    {
        for ( j = 0; j < m; j++)

            cout<<a[i][j]<<"\t";
        cout << endl;
    }

    int temp;

        for ( i = 0; i < m; i++)
        {
            temp = a[i][p];
            a[i][p] = a[i][q];
            a[i][q] =temp;
        }


    cout<<"\n\n\n";

    for ( i = 0; i < n; i++) // ������� ���������������
    {

        for ( j = 0; j < m; j++)

            cout<<a[i][j]<<"\t";
        cout << endl;
    }


}
