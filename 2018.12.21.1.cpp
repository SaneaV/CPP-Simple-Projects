///��������� ������ �� ���������� �������
///1. �������� ������
///2. ����� ������
///3. ����� ������������� � ������������ ����� � ������.
///4. ����� �����
///5. �������� �������� �� ��������
///6. �������� �������� �� �������
///7. ���������� �������� � ������ �� ����� �������
///8. ������� �� ����� ��� �������� ������� "n"

#include <iostream>

using namespace std;

struct List
{
    int info;
    List *next;
}
*bg;

List *Filling()
{
    List *cr, *prv;
    int n;

    cout<<"������� ���������� ��������� ������: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cr=new List;
        cout<<"������� �����: ";
        cin>>cr->info;
        cr->next=NULL;

        if(bg==NULL)
        {
            bg=cr;
            prv=bg;
        }
        else
        {
            prv->next=cr;
            prv=cr;
        }

    }
    return bg;
}

void ShowList()
{
    if (bg==NULL)
    {
        cout<<"������ ����"<<endl;
    }

    else
    {
        List *cr=bg;

        while(cr!=NULL)
        {
            cout<<cr->info<<" ";
            cr=cr->next;
        }
    }
}

void MaxMin()
{
    if(bg!=NULL)
    {
        List *cr=bg;
        int Max=bg->info;
        int Min=bg->info;

        while(cr!=NULL)
        {
            if(cr->info>Max)
                Max=cr->info;
            if(cr->info<Min)
                Min=cr->info;
            cr=cr->next;
        }

        cout<<endl<<endl;
        cout<<"������������ �����: "<<Max<<endl;
        cout<<"����������� �����: "<<Min<<endl;

    }
}

void Sum()
{
    if(bg!=NULL)
    {
        List *cr=bg;
        int Sum=0;

        while(cr!=NULL)
        {
            Sum+=cr->info;
            cr=cr->next;
        }

        cout<<endl<<endl;
        cout<<"����� �����: "<<Sum<<endl;
    }
}

List *DeleteByINT()
{
    if(bg!=NULL)
    {
        cout<<endl<<endl;
        List *cr, *prv;
        int n;
        int k=0;

        cout<<"������� �����, ������� �� ������ �������: ";
        cin>>n;

        if(bg->info==n)
        {
            bg=bg->next;
            k++;
        }
        cr=bg;
        prv=bg;

        while(cr!=NULL)
        {
            if(cr->info==n)
            {
                prv->next=cr->next;
                k++;
            }
            prv=cr;
            cr=cr->next;
        }

        if(k!=0)
            cout<<"������� �����"<<endl;
        else
            cout<<"����� ������� �� ������"<<endl;
    }

    return bg;
}

List *DeleteByPos()
{
    if(bg!=NULL)
    {
        cout<<endl<<endl;
        List *cr, *prv;
        int n;
        int k=1;

        cout<<"������� ������� ��������: ";
        cin>>n;

        if(n==1)
        {
            bg=bg->next;
        }
        cr=bg;
        prv=bg;

        while(cr!=NULL)
        {
            if(k==n)
            {
                prv->next=cr->next;
            }
            prv=cr;
            cr=cr->next;
            k++;
        }

        if(k<n)
            cout<<"������ ������ � ������ ���"<<endl;
        else
            cout<<"������ ��� �����"<<endl;
    }
}

List *Add()
{
    List *cr, *r, *prv;

    int n;
    int p;
    int k=1;

    r=new List;
    cout<<"������� �������, ������� ���������� ��������: ";
    cin>>r->info;
    r->next=NULL;

    if(bg==NULL)
    {
        cout<<"������ ����� �������� �� ������ �������"<<endl;
        bg=r;
    }
    else
    {
        cout<<"������� �������, �� ������� ���������� �������� �������: ";
        cin>>p;

        if(p==1)
        {
            cr=bg;
            bg=r;
            bg->next=cr;
        }
        else
        {
            cr=bg;
            prv=cr;

            while(cr!=NULL)
            {
                if(k==p)
                {
                    prv->next=r;
                    r->next=cr;
                }

                prv=cr;
                cr=cr->next;
                k++;
            }

            if(k==p)
            {
                prv->next=r;
            }

        }

        if(k+1<p)
            cout<<"������� ������� ������ �����������"<<endl;
        else
            cout<<"������� ��� ��������"<<endl;
    }

    return bg;
}


int main()
{
    setlocale(LC_ALL,"RUS");

    bg=NULL;

    bg=Filling();
    cout<<endl<<endl;
    ShowList();
    MaxMin();
    Sum();
    bg=DeleteByINT();
    if(bg!=NULL)
    {
        cout<<endl<<endl<<"����� ��� ������: "<<endl;
        ShowList();
    }
    cout<<endl;
    DeleteByPos();
    if(bg!=NULL)
    {
        cout<<endl<<endl<<"����� ��� ������: "<<endl;
        ShowList();
    }
    cout<<endl<<endl;
    bg=Add();
    if(bg!=NULL)
    {
        cout<<endl<<endl<<"����� ��� ������: "<<endl;
        ShowList();
    }


}
