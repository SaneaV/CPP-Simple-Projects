//����� ������������� ����� ����������� ������� ��� ������ �������.

#include <iostream>

using namespace std;

void InputArray (int x[],int &n)
{
    cout<<"������� ���������� �����: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"������� �����: ";
        cin>>x[i];
    }
}

void ShowArray(int x[], int &n)
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
}

int SumArray (int x[], int &n)
{
    int Sum=0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]<0) Sum+=x[i];
    }

    return Sum;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    int Array[20];
    int m;
    InputArray(Array,m);
    ShowArray(Array,m);
    cout<<endl<<"����� ������������� ����� �������: "<<SumArray(Array,m);

}
