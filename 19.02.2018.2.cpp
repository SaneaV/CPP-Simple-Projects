//�������� ���������, ������� ������ �� ����� ���������� ���������� � ������ 4 ������ � ������� �� �����:
//1. ������ ���� �����, ��� �������� ������, ��� �������
//2. ������� ������� ���� �����
//3. ���-�� ����� �������� ������� ������� � ����������
//4. ������ � ������ � ������������ ����������

#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    FILE *f;
    f=fopen("Zadacha3.txt","r");

    struct figur
    {
        int Nomer;
        char Nazvanie[20];
        int perimetr;
        int ploshadi;
    } x[30];

    int i=0;
    int SS=0;
    int number=0;
    int maxP=0;
    int nomerf=0;

    while (!feof(f))
    {
        fread(&x[i],sizeof(figur),1,f);

        if (!feof(f))
        {
           if (x[i].perimetr<x[i].ploshadi) cout<<x[i].Nazvanie<<endl;
           SS+=x[i].ploshadi;
           if (number<x[i].Nomer) number=x[i].Nomer;
           if (maxP<x[i].perimetr) {maxP=x[i].perimetr; nomerf=i;}


        }
    }

    cout<<"\n\n\nSrednia ploshadi: "<<SS/number<<endl;
    cout<<x[nomerf].Nomer<<"\t"<<x[nomerf].Nazvanie<<"\t"<<x[nomerf].perimetr<<"\t"<<x[nomerf].ploshadi<<endl;


}
