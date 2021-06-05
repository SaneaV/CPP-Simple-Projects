//�������� �����. ���������� ��������� A={a1, a2, ..., an}, ���������� �������� �������� ������������� � ������� ����������� ����� �����.
//�������� ���������, ������� ����������,
//�������� �� ��������� A �������� ����� p. ������� ��������� ��������� ���������� ���������.

#include<iostream>

using namespace std;

float A[100],x;
int n, p;


bool Find(int i, int j)
{
    int m;
    if(i!=j)
    {
        m=(i+j)/2;
        if(A[m]==p)
            return true;
        else if (p<A[m])
            return Find(i, m-1);
        else
            return Find (m+1, j);
    }
    else if (A[i]==p)
        return true;
    else
        return false;
}

int main()
{
    setlocale(LC_ALL,"RUS");
    cout<<"������� ������ �������: ";
    cin>>n;

    cout<<"������� ����� ������: ";
    cin>>p;

    for(int i=0; i<n; i++)
    {
        A[i]=i+1;
    }

    if(Find(0, n-1))
        cout<<"Yes";
    else cout<<"No";


}
