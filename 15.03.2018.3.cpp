//����� ������� �������������� ����������� �������.

#include <iostream>
#include <cstring>

using namespace std;


int Medium(int x[30], int m)
{
    int S=0;
    for (int i=0;i<m;i++)
    {
        S+=x[i];
    }
    int rez=S/m;
    return S/m;
}

main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ���������� �����: ";
    int n;
    cin>>n;
    int x1[30];

    for (int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x1[i];
    }

    cout<<"������� ��������������: "<<Medium(x1,n);

}
