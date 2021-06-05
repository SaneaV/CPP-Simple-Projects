/*"���� n (n<30) ����� �� ���������� ���������. ������ ����� i ������������ ������������ xi, yi. ���������� ����� ������� i, j ����������� �� �������
d=((x_1-x_2 )^2+(y_1-y_2 )^2 )
�������� ���������, ������� ������� �� ����� ���������� ���� �����, ���������� ����� �������� �����������.*/

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    cout<<"������� ���������� �����: ";
    int n;
    do
    {
        cin>>n;
    }
    while(n<0 or n>30);

    system("cls");

    struct PUNCT
    {
        float x1;
        float x2;
        float y1;
        float y2;
    } P[n];

    int *A = new int [n];


    for(int i=0; i<n; i++)
    {
        cout<<"������� ������� (x1;y1)(����� enter): "<<endl;
        cin>>P[i].x1>>P[i].y1;

        cout<<"������� ������� (x2;y2)(����� enter): "<<endl;
        cin>>P[i].x2>>P[i].y2;

        system("cls");
    }

    for(int i=0; i<n; i++)
    {
        A[i] = sqrt(pow((P[i].x2-P[i].x1),2)+pow((P[i].y2-P[i].y1),2));
    }


    int Selection;
    int Reselection;
    bool FinishProgram = false;

    while(!FinishProgram)
    {
        cout<<"1. ���������� ���� �����, ���������� ����� �������� �����������."<<endl;
        cout<<"��� �����: ";
        do
        {
            cin>>Selection;
        }
        while(Selection>1 or Selection<1);

        system("cls");

        switch(Selection)
        {
        case 1:
        {
            int max = 0;
            int pmax = 0;

            for(int i=0; i<n; i++)
            {
                if(A[i]>max)
                {
                    max=A[i];
                    pmax = i;
                }
            }
            cout<<"���������� ���� �����, ��������� ����� �������� �����������: "<<endl;
            cout<<"x1 = "<<P[pmax].x1<<": x2 = "<<P[pmax].x2<<endl;
            cout<<"y1 = "<<P[pmax].y1<<": y2 = "<<P[pmax].y2<<endl;

            cout<<endl<<endl;
            cout<<"1.��������� � ����."<<endl;
            cout<<"2.����� �� ���������."<<endl;
            do
            {
                cin>>Reselection;
            }
            while(Reselection>2 or Reselection<1);

            if (Reselection==1)
                system("cls");
            if(Reselection==2)
                FinishProgram=true;
            break;

        }
        }
    }


}
