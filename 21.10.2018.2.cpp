/*����������� ������ � �������. ������� n ���������. ��� ������� �������� i (i=1, 2, ..., n)
�������� ��� gi � ������� ci, ������� ���������� ��� ���������������. ������� ������, � ������� ����� ���������� ���� � ����� ���������,
��������� ��� ������� �� ��������� �������� Gmax. �������� ���������, ������� ����������, ����� ������� ���������� ��������� ������ � ���,
����� ��������� ������� C ���� �����������. ��� �������������, ����������� �������� ����� ��������� �� ������� �����.*/

//��� ������� ����� ������ � �������� ����� ���������.

#include <iostream>

using namespace std;

float c[1000], g[1000], Gmax, k[1000];
int n;

bool ExistElement()
{
    for(int i=0; i<n; i++)
        if(c[i]>0)
            return true;
    return false;
}

void SelecElement(int &x)
{
    int imax=0;
    for(int i=0; i<n; i++)
        if(c[i]/g[i]>c[imax]/g[imax])
            imax=i;
    x=imax;
    c[imax]=0;

}

void IncludeElement(int x)
{
    if(g[x]<Gmax)
    {
        k[x]=1;
        Gmax-=g[x];
    }
    else
    {
        k[x]=Gmax/g[x];
        Gmax-=k[x]*g[x];
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int x;

    cout<<"������� ���������� �����: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"������� ���� ����: ";
        cin>>c[i];
        cout<<"������� ��� ����: ";
        cin>>g[i];

        k[i]=0;
    }

    cout<<"������� ����������� �������: ";
    cin>>Gmax;

    while(ExistElement())
    {
        SelecElement(x);
        IncludeElement(x);
    }

    for(int i=0;i<n;i++)
        cout<<k[i]<<" ";

}
