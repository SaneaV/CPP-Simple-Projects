//�������� ������������ ������

#include <iostream>
#include <windows.h>

using namespace std;

struct List
{
    int info;
    List *next;
}*bg;


void Create()
{
    List *cr, *prv;
    if(bg!=NULL)
        cout<<"���� ������."<<endl;
    else
        do
        {
            cr = new List;

            cout<<"������� ����� �����: ";
            cin>>cr->info;

            if(cr->info!=0)
            {
                cr->next=NULL;
                if(bg==NULL)
                    bg = cr;
                else
                    prv->next = cr;
                prv = cr;
            }

        }
        while(cr->info!=0);
}

void Show()
{
    List *cr;

    if(bg==NULL)
        cout<<"���� ����."<<endl;
    else
    {
        cr=bg;
        while(cr!=NULL)
        {
            cout<<cr->info<<" ";
            cr=cr->next;
        }
        cout<<endl;
    }

}

List* Find(int p)
{
    List *cr;
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
    List *r, *q;
    int poz;
    r = new List;
    cout<<"������� ����� �������: ";
    cin>>r->info;
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

void Delete()
{
    List *r, *q;

    int poz;
    cout<<"������� �������: ";
    cin>>poz;

    if(poz==1)
    {
        r=bg;
        bg=bg->next;
        delete r;
    }

    else
    {
        q=Find(poz-1);
        if(q==NULL)
            cout<<"���������� �������."<<endl;
        else
        {
            r=q->next;
            q->next=r->next;
            delete r;
        }
    }
}

int Sum ()
{
    int Sum = 0;

    List *cr;

    cr = bg;

    while(cr!=NULL)
    {
        Sum+=cr->info;
        cr=cr->next;
    }
    return Sum;
}

int main()
{
    setlocale(LC_ALL,"RUS");

    bg=NULL;
    cout<<"������� �����, ��� ��������� ������� ����."<<endl<<endl;
    Create();
    system("cls");

    bool Y = false;
    int YY;
    do
    {
        int Selection;
        cout<<"��� �� ������ ������� ������: "<<endl;
        cout<<"1. ������� ������."<<endl;
        cout<<"2. ����� ������� � ������."<<endl;
        cout<<"3. �������� ����� �������."<<endl;
        cout<<"4. �������� ��������."<<endl;
        cout<<"5. ����� ���������."<<endl;
        cout<<"��� �����: ";
        cin>>Selection;
        system("cls");

        switch(Selection)
        {
        case 1:
        {
            cout<<"��� ��� �������� ��� ������: ";
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
            cout<<"������� �������: ";
            int pp;
            cin>>pp;

            List *q=Find(pp);
            cout<<"����� �� "<<pp<<" �������: "<<q->info;

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
        case 5:
        {
            cout<<"����� ���������: "<<Sum();

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
    system("cls");




}

