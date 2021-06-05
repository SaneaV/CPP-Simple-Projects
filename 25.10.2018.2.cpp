//������ � ��������� � �������

#include<iostream>

using namespace std;

int Nominal[50],n,m[50],x[50],S, p;
bool flag;

int FirstElement(int k)
{
    return 0;
}
bool Continue(int k)
{
    int sum=0;
    int kol=0;

    for(int i=0; i<k; i++)
    {
        sum+=x[i]*Nominal[i];
        kol+=x[i];
    }
    if ((k<n and sum<=S and kol<=p) or (k==n and sum==S and kol==p))
        return true;
    else
        return false;
}

bool ExistSuccessor(int k)
{
    return (x[k]<m[k]);
}

int Successor(int k)
{
    return x[k]+1;
}

void ProcessingSolution()
{
    cout<<"�������:"<<endl;
    for(int i=0; i<n; i++)
        cout<<Nominal[i]<<" -> "<<x[i]<<endl;
    flag=true;
}

void Backtracking(int k)
{
    if(k<=n)
    {
        x[k]=FirstElement(k);
        if(Continue(k))
            Backtracking(k+1);
        while (ExistSuccessor(k))
        {
            x[k]=Successor(k);
            if(Continue(k))
                Backtracking(k+1);
        }
    }
    else
        ProcessingSolution();
}

int main()
{
    setlocale(0,"Rus");

    cout<<"������� ���������� ���������: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"������� ���������� �����:";
        cin>>m[i];
        cout<<"������ ������� �����: ";
        cin>>Nominal[i];
    }

    cout<<"������� �����: ";
    cin>>S;
    cout<<"������� ���������� �����: ";
    cin>>p;

    flag=false;
    Backtracking(0);
    if(!flag)
        cout<<"������� ���";
}

