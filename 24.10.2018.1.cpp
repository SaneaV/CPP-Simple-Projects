/*��������� �������������� ����. �� ����� ������������ n �����, n<=30. � ������ ���������� ����� ������������ ��� ������ �������  , ���
1 - ���� ������ ��������
0 - � ��������� ������
������� ����������� ����� ������ m, ����������� ��� ��������� �����. �����������, ����� ��� �������� ������ ������ ���� ��������� ���������� �������.*/


#include <iostream>
#include <fstream>

using namespace std;

int MapPoints[10][10], Colors[10];
int n, m;
bool flag;

struct Colors
{
    char NameColor[10];
} C[10];

void MapRead()
{
    ifstream f("Map.txt");

    f>>n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            f>>MapPoints[i][j];
}

int SearchNumOfColors()
{
    int k = 0;
    int kmax = 0;

    for(int i=0; i<n; i++)
    {
        k=0;
        for(int j=0; j<n; j++)
        {
            k++;
        }
        if(k>kmax)
            kmax=k;
    }
    return kmax;
}

int FirstElement(int k)
{
    return 0;
}
bool Continue(int k)
{

}

bool ExistSuccessor(int k)
{

}

int Successor(int k)
{

}

void ProcessingSolution()
{

}

void Backtracking(int k)
{

}

int main()
{
    setlocale(0,"");

    MapRead();
    m = SearchNumOfColors();

    for(int i=0; i<m; i++)
    {
        cout<<"������� ����: ";
        cin>>C[i].NameColor;
    }

}
