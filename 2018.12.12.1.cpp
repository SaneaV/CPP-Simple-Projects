#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    ///����� �������� � ����������� = ������.
    setlocale(LC_ALL,"RUS");

    char P1[255];
    cout<<"������� �����������: ";
    gets(P1);

    char P2[10]=" ,.?!:;";
    char *pch=strtok(P1,P2);

    int kmin=255;
    int kmax=0;

    char Pmax[255];
    char Pmin[255];

    while(pch!=NULL)
    {
        if(strlen(pch)<kmin)
        {
            strcpy(Pmin,pch);
            kmin=strlen(pch);
        }
        if(strlen(pch)>kmax)
        {
            strcpy(Pmax,pch);
            kmax=strlen(pch);
        }
        pch=strtok(NULL,P2);
    }

    cout<<"����� ������� �����: "<<Pmax<<endl;
    cout<<"����� �������� �����: "<<Pmin<<endl;

}
