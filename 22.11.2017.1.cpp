//��� ������ x, ������� �� ����� ������� ������� � ��� ����� � �������� ���������

#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL,"Russian");
    int n, i, x[1000], s=0, j;
    cout<<"������� ���������� ���������: ";//����� ���������� ���������
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout<<"������� �������: ";//����� �������� ��������� �������
        cin>>x[i];
    }
    i=0;
    int y[1000];
    cout<<"���������: ";//��������� � ������� ���������
    while (i<n)
    {
        if (x[i+1]!=x[n])
        {
        cout<<x[i]<<" ";//������� ������� �������
        y[i]=x[i]+x[++i];//������� ����� ����� �������� � ���������
        cout<<y[i]<<" ";
        }
        if (x[i+1]==x[n])
        {
            cout<<x[i]<<" ";
            i++;
        }
    }
}