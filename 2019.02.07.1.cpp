#include <iostream>
#include <windows.h>

using namespace std;

class Matrix
{
private:
    int n;
    int m;
    int M[20][20];

public:
    void Create();
    void Show();
    void PozitivNegativZero();
    void ChetNechet();
    void SumMedium();
    void MaxMin();

    void Add();
    void ShowSelect();

    Matrix(int n, int m);
};

Matrix::Matrix(int n, int m)
{
    this->n=n;
    this->m=m;

    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++)
            M[i][j]=0;
}

void Matrix::Create()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            M[i][j]=5;
        }
    }
}

void Matrix::Show()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}

void Matrix::PozitivNegativZero()
{
    int Poz=0;
    int Neg=0;
    int Zero=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(M[i][j]>0)
                Poz++;
            if(M[i][j]<0)
                Neg++;
            if(M[i][j]==0)
                Zero++;
        }
    }

    cout<<"���������� ���������� �����: "<<Poz<<endl;
    cout<<"���������� ���������� �����: "<<Neg<<endl;
    cout<<"���������� �����: "<<Zero<<endl;
}

void Matrix::ChetNechet()
{
    int Del=0;
    int NoDel=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(M[i][j]%2==0)
                Del++;
            if(M[i][j]%2!=0)
                NoDel++;
        }
    }

    cout<<"����� ������� 2: "<<Del<<endl;
    cout<<"����� �� ������� 2: "<<NoDel<<endl;
}

void Matrix::SumMedium()
{
    int Sum=0;
    int Medium=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            Sum+=M[i][j];
        }
    }

    cout<<"����� �������: "<<Sum<<endl;
    cout<<"������� �������: "<<Sum/(n*m)<<endl;
}

void Matrix::MaxMin()
{
    int Max=M[0][0];
    int Min=M[0][0];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(M[i][j]>Max)
                Max=M[i][j];
            if(M[i][j]<Min)
                Min=M[i][j];
        }
    }

    cout<<"������������ ����� � �������: "<<Max<<endl;
    cout<<"����������� ����� � �������: "<<Min<<endl;
}

void Matrix::Add()
{
    cout<<endl<<"1. �������� ������.";
    cout<<endl<<"2. �������� �������."<<endl;
    cout<<"��� �����: ";
    int Select;
    cin>>Select;

    switch(Select)
    {
    case 1:
    {
        cout<<"������� ����� ������, �� ������� ������ ��������: ";
        int S;
        cin>>S;

        try
        {
            if(S>n+1 or S<0)
                throw 99;


            this->n=++n;

            for(int i=n; i>S; i--)
            {
                for(int j=0; j<m; j++)
                {
                    M[i][j]=M[i-1][j];
                }
            }

            cout<<"������� �����, ������� ������ ��������: ";
            int Number;
            cin>>Number;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(S==i)
                    {
                        M[i][j]=Number;
                    }
                }
            }

        }
        catch (int i)
        {
            cout<<"������ #"<<i<<". ������ ������ 0 ��� ������ "<<n<<endl;

        }
        break;
    }
    case 2:
    {
        cout<<"������� ����� �������, �� ������� ������ ��������: ";
        int S;
        cin>>S;

        try
        {
            if(S>m+1 or S<0)
                throw 99;


            this->m=++m;

            for(int i=0; i<n; i++)
            {
                for(int j=S; j>m; j--)
                {
                    M[i][j]=M[i][j-1];
                }
            }

            cout<<"������� �����, ������� ������ ��������: ";
            int Number;
            cin>>Number;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(S==j)
                    {
                        M[i][j]=Number;
                    }
                }
            }
        }
        catch (int i)
        {
            cout<<"������ #"<<i<<". ������� ������ 0 ��� ������ "<<n<<endl;

        }
    }
    }

}

void Matrix::ShowSelect()
{
    cout<<"1.������� ������."<<endl;
    cout<<"2.������� ������."<<endl;
    cout<<"��� �����: ";
    int Select;
    cin>>Select;

    switch(Select)
    {
    case 1:
    {
        cout<<"������� ����� ������: ";
        int S;
        cin>>S;


        try
        {
            if(S<0 or S>n)
                throw 99;

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    if(S==i)
                        cout<<M[i][j]<<" ";
            cout<<endl;


        }
        catch(int i)
        {
            cout<<"������ �"<<i<<"������ ������� �� ����������"<<endl;
        }
        break;
    }
    case 2:
    {
        cout<<"������� ����� �������: ";
        int S;
        cin>>S;

        try
        {
            if(S<0 or S>n)
                throw 99;

            for(int i=0; i<n; i++)
                for(int j=0; j<m; j++)
                    if(S==j)
                        cout<<M[i][j]<<" ";
            cout<<endl;


        }
        catch(int i)
        {
            cout<<"������ �"<<i<<"������ ������� �� ����������"<<endl;
        }
        break;
    }
    }
}

int main()
{
    setlocale(LC_ALL,"RUS");
    int n;
    int m;
    int Select;
    bool Work=true;

    cout<<"������� ���������� �����: ";
    cin>>n;
    cout<<"������� ��������� ��������: ";
    cin>>m;

    Matrix M(n,m);
    M.Create();

    system("cls");

    while(Work)
    {
        cout<<"1. ������� �������"<<endl;
        cout<<"2. ����������, ���������� � ����"<<endl;
        cout<<"3. ׸���� � ��������"<<endl;
        cout<<"4. ����� � ������� �������"<<endl;
        cout<<"5. ������������ � �����������"<<endl;
        cout<<"6. �������� ������/�������"<<endl;
        cout<<"7. ������� ������/�������"<<endl;
        cout<<"8. ����� �� ���������"<<endl;
        cout<<"��� �����: ";
        cin>>Select;

        switch(Select)
        {
        case 1:
        {
            system("cls");
            M.Show();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }

            break;
        }
        case 2:
        {
            system("cls");
            M.PozitivNegativZero();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }
            break;
        }
        case 3:
        {
            system("cls");
            M.ChetNechet();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            M.SumMedium();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }
            break;
        }
        case 5:
        {
            system("cls");
            M.MaxMin();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }
            break;
        }
        case 6:
        {
            system("cls");
            M.Add();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }
            break;
        }
        case 7:
        {
            system("cls");
            M.ShowSelect();

            cout<<endl<<endl<<endl;

            cout<<"1. ��������� � ����"<<endl;
            cout<<"2. ����� �� ���������"<<endl;
            cout<<"��� �����: "<<endl;
            int SecondSelect;
            cin>>SecondSelect;
            switch(SecondSelect)
            {
            case 1:
            {
                system("cls");
                break;
            }
            case 2:
            {
                system("cls");
                Work = false;
                break;
            }
            }
            break;
        }
        case 8:
        {
            Work=false;
            system("cls");
            break;
        }

        }
    }

}
