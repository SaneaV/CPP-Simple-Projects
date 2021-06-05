#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

struct Candidat
{
    char name[20];
    float Mark;
    Candidat *next;
}*bg;

struct Candidat2
{
    char name[20];
    float Mark;
    Candidat2 *next;
}*bg2;


void Create()
{
    Candidat *cr, *prv;
    if(bg!=NULL)
        cout<<"���� ������."<<endl;
    else
        do
        {
            cr = new Candidat;

            do
            {
                cout<<"������� ��� �������: ";
                cin>>cr->name;
                cout<<"������� ������� ����: ";
                cin>>cr->Mark;
                cout<<endl;
            }
            while(cr->Mark>10 or cr->Mark<0);


            if(cr->Mark!=0)
            {
                cr->next=NULL;
                if(bg==NULL)
                    bg = cr;
                else
                    prv->next = cr;
                prv = cr;
            }

        }
        while(cr->Mark!=0);
}

void Show()
{
    Candidat *cr;

    if(bg==NULL)
        cout<<"���� ����."<<endl;
    else
    {
        cr=bg;
        while(cr!=NULL)
        {
            cout<<cr->name<<" - "<<cr->Mark<<endl;
            cr=cr->next;
        }
        cout<<endl;
    }

}


void Delete()
{
    Candidat *prev=0, *cr;

    char NameS[20];
    cout<<"������� ��� �������, ������� �������� �����: ";
    cin>>NameS;

    cr=bg;
    int k=0;

    while(cr)
    {
        Candidat *next = cr->next;
        if(strcmp(cr->name,NameS)==0)
        {
            k++;
            if (prev)
                prev->next = next;
            delete cr;
        }
        else
        {
            prev = cr;
        }
        cr = next;
    }
    if(k==0)
        cout<<"������ �������� ���"<<endl;
}

Candidat* Find(int p)
{
    Candidat *cr;
    int i=0;
    cr=bg;
    while(cr!=NULL)
    {
        i++;
        if(i==p)
            return cr;
        cr=cr->next;
    };
    return cr;
}

void Insert()
{
    Candidat *r, *q;
    int poz;
    r = new Candidat;
    cout<<"������� ��� �������: ";
    cin>>r->name;
    cout<<"������� ������� ���� �������: ";
    cin>>r->Mark;
    cout<<"������� �������: ";
    cin>>poz;
    q = Find(poz-1);
    if (poz==1)
    {
        r->next=bg;
        bg=r;
    }
    else
    {
        q=Find(poz-1);
        if(q==NULL)
            cout<<"����������� ������."<<endl;
        else
        {
            r->next=q->next;
            q->next=r;
        }

    }

}

void MT75()
{
    Candidat *cr;

    cr=bg;

    while(cr!=NULL)
    {
        if(cr->Mark>7.5)
        {
            cout<<cr->name<<" "<<cr->Mark<<endl;
        }
        cr=cr->next;
    }
}

void CtoC2()
{
    Candidat2 *cr2, *prv;
    Candidat *cr;

    cr = bg;

    while(cr!=NULL)
    {
        if(cr->Mark>9)
        {
            cr2= new Candidat2;
            cr2->next=NULL;

            strcpy(cr2->name,cr->name);
            cr2->Mark=cr->Mark;

            if(bg2==NULL)
                bg2 = cr2;
            else
                prv->next = cr2;
            prv = cr2;

        }
        cr=cr->next;
    }
}

void Show2()
{
    Candidat2 *cr;

    if(bg2==NULL)
        cout<<"���� ����."<<endl;
    else
    {
        cr=bg2;
        while(cr!=NULL)
        {
            cout<<cr->name<<" - "<<cr->Mark<<endl;
            cr=cr->next;
        }
        cout<<endl;
    }

}


void DeleteM6 ()
{
    Candidat *cr, *r, *q;

    cr = bg;
    int i=0;

    while(cr!=NULL)
    {
        i++;
        if(cr->Mark<6)
        {
            if(i==1)
            {
                r=bg;
                bg=bg->next;
                delete r;
            }
            else
            {
                q=cr;

                r=q->next;
                q->next=r->next;
                delete r;
            }
        }
        cr=cr->next;
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");

    bg=NULL;
    cout<<"������� ��������."<<endl;
    cout<<"���� ��������� ���� � ���� �������� �����."<<endl<<endl;;

    Create();

    system("cls");


    bool Y = false;
    int YY;
    do
    {
        int Selection;
        cout<<"��� �� ������ ������� ������: "<<endl;
        cout<<"1. ���������� ������."<<endl;
        cout<<"2. ������� ������� �� ������.(��������� ������)"<<endl;
        cout<<"3. �������� �������."<<endl;
        cout<<"4. ����� �� ����� �����, � ������� ���� ���� 7,5."<<endl;
        cout<<"5. ������� ������ ������ � ������ ���� �����, � ������� ���� ���� 9"<<endl;
        cout<<"6. ������� �� ������ �����, ������� ���� ������� ������ 6.(�������� ��������)"<<endl;
        do
        {
            cin>>Selection;
        }
        while(Selection<0);
        system("cls");

        switch(Selection)
        {
        case 1:
        {
            cout<<"������ ��������: "<<endl<<endl;
            Show();

            cout<<endl<<endl<<"����������?"<<endl;
            cout<<"1.��"<<endl;
            cout<<"2.���"<<endl;
            cout<<"��� �����: ";
            cin>>YY;

            if(YY==1)
                system("cls");
            if(YY==2)
                Y=true;
            break;

        }
        case 2:
        {
            Delete();
            Show();

            cout<<endl<<endl<<"����������?"<<endl;
            cout<<"1.��"<<endl;
            cout<<"2.���"<<endl;
            cout<<"��� �����: ";
            cin>>YY;

            if(YY==1)
                system("cls");
            if(YY==2)
                Y=true;
            break;
        }

        case 3:
        {
            Insert();
            Show();

            cout<<endl<<endl<<"����������?"<<endl;
            cout<<"1.��"<<endl;
            cout<<"2.���"<<endl;
            cout<<"��� �����: ";
            cin>>YY;

            if(YY==1)
                system("cls");
            if(YY==2)
                Y=true;
            break;
        }

        case 4:
        {
            MT75();

            cout<<endl<<endl<<"����������?"<<endl;
            cout<<"1.��"<<endl;
            cout<<"2.���"<<endl;
            cout<<"��� �����: ";
            cin>>YY;

            if(YY==1)
                system("cls");
            if(YY==2)
                Y=true;
            break;
        }
        case 5:
        {
            CtoC2();
            Show2();

            cout<<endl<<endl<<"����������?"<<endl;
            cout<<"1.��"<<endl;
            cout<<"2.���"<<endl;
            cout<<"��� �����: ";
            cin>>YY;

            if(YY==1)
                system("cls");
            if(YY==2)
                Y=true;
            break;
        }
        case 6:
        {
            DeleteM6();
            Show();

            cout<<endl<<endl<<"����������?"<<endl;
            cout<<"1.��"<<endl;
            cout<<"2.���"<<endl;
            cout<<"��� �����: ";
            cin>>YY;

            if(YY==1)
                system("cls");
            if(YY==2)
                Y=true;
            break;
        }

        }
    }
    while(!Y);

}


