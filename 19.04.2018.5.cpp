//��� ��������� ���� ����������� �����, �� �������� ������� ����� ������������� �����.
//��������� ����������� ������������, �������� ����� ����� �����.


#include <iostream>
#include <fstream>

using namespace std;

int Sum(int A[],int x)
{
    if (x==0)
        return 0;
    else
        return Sum(A,x-1)+A[x-1];
}

int main()
{
    setlocale(LC_ALL,"RUS");

    ofstream f("File.txt");

    cout<<"���������, ������������� ����� �������� �������������."<<endl;
    cout<<"������� ���������� �����: ";
    int n;
    cin>>n;

    int y;

    for(int i=0; i<n; i++)
    {
            cout<<"������� �����: ";
            cin>>y;
            f<<y<<" ";
    }

    f.close();

    ifstream g("File.txt");

    int Array[250];

    int j=0;

    while(!g.eof())
    {
        g>>y;
        Array[j]=y;
        j++;

    }

    g.close();

    int t=0;
    for (int i=0; i<n; i++)
    {
        t=Array[0];
        if (i==n-1)
        {
            Array[0]=Array[n];
            Array[n]=t;
        }
    }

    cout<<endl<<Sum(Array,n)<<endl;
}
