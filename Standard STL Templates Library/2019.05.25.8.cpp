///��� �� �� �����, ������ � ��� ������� ����������� ��� ��������.
///����� ������ ��������� ���

#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class publication
{
public:

    virtual void SetNumberOfPage()
    {
        cout<<"������� ���������� �������: ";
        cin>>NumberOfPage;
    }

    virtual int getNumberOfPage()
    {
        return NumberOfPage;
    }

private:
    int NumberOfPage;
};

class sales
{
public:

    virtual void SetNumberOfSoldCopies()
    {
        cout<<"������� ���������� ��������� �����: ";
        cin>>NumberOfCopies;
    }

    virtual int getNumberOfCopies()
    {
        return NumberOfCopies;
    }

private:
    int NumberOfCopies;
};


class book : public publication, public sales
{
private:
    string NameBook;
public:

    void SetBook()
    {
        cout<<"������� �������� �����: ";
        cin>>NameBook;
        publication::SetNumberOfPage();
        sales::SetNumberOfSoldCopies();
    }

    void GetBook()
    {
        cout<<"�������� �����: "<<NameBook<<endl;
        cout<<"���������� �������: "<<publication::getNumberOfPage()<<endl;
        cout<<"���������� ��������� �����: "<<sales::getNumberOfCopies()<<endl;
    }


};

int main()
{
    setlocale(LC_ALL, "rus");

    book b;

    b.SetBook();

    cout<<endl<<endl;

    b.GetBook();

    return 0;
}
