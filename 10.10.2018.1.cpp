/*� ������� ��������� N ����� ��������� ���������� ����� ����� G �������. ��� ������ ������ ������������ ��������� ��� � �������, ����������� ����.

��������� ������, ���	��� ������, �����
1	1
5	2
10	3
25	4
50	5
�������� ���������, ������� ��������� ����������� ����� S, ������� ����� ���������� � �������. */

#include <iostream>
#include <windows.h>

using namespace std;

int Smin(int G, int N)
{
    int Smin=0;
    int *Money = new int [N];
    bool Y=true;
    int G2=0;

    //��������� ������ ���������
    for(int i=0; i<N; i++)
        Money[i]=1;

    //������ ������ �������� (��������� ��� ������ ��������� 1 ���)
    for(int i=0; i<N; i++)
        G2+=Money[i];

    if(G2==G)
    {
        cout<<"��� ������ ��������� 1 ���."<<endl;
        return G;
    }
    else if(G2>G)
    {
        cout<<"����� ��������� ����������."<<endl;
        return 0;
    }

    int k=0; //��������, ���� ��� �������� ����������

    Money[0]=2;

    while(Y)
    {
        G2=0;
        k=1;

        for(int i=0; i<N; i++)
            G2+=Money[i];

        if(G2==G)
            Y=false;
        else
        {
            for(int i=1; i<N; i++)
            {
                if(Money[0]==Money[i])
                    k++;
            }
            if(k==N)
                Money[0]+=1;
            else if(k<N)
                Money[k]+=1;
        }

        for(int i=0; i<N; i++)
        {
            if(Money[i]>5)
            {
                cout<<"����� ��������� ����������."<<endl;
                return 0;
            }
        }
    }

    for(int i=0; i<N; i++)
    {
        if(Money[i]==1)
        {
            cout<<i+1<<". ������ ��������� 1 ���"<<endl;
            Smin+=1;
        }
        if(Money[i]==2)
        {
            cout<<i+1<<". ������ ��������� 5 ���"<<endl;
            Smin+=5;
        }
        if(Money[i]==3)
        {
            cout<<i+1<<". ������ ��������� 10 ���"<<endl;
            Smin+=10;
        }
        if(Money[i]==4)
        {
            cout<<i+1<<". ������ ��������� 25 ���"<<endl;
            Smin+=25;
        }
        if(Money[i]==5)
        {
            cout<<i+1<<". ������ ��������� 50 ���"<<endl;
            Smin+=50;
        }
    }

    cout<<endl<<endl;
    return Smin;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ��� �����: ";
    int G;
    cin>>G;

    cout<<"������� ���������� �����: ";
    int N;
    cin>>N;

    cout<<endl<<endl<<endl;

    int S = Smin(G,N);

    if(S!=0)
        cout<<"����������� ����� "<<N<<" �����, ����� "<<G<<" �����"<<", ����������: "<<S<<" ���."<<endl;
}
