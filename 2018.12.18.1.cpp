#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"RUS");

    int Months[13];

    for(int i=0;i<12;i++)
    {
        cout<<"������� ����������� ��� "<<i+1<<" ������: ";
        cin>>Months[i];
    }

    float MedPoz=0;
    float MedNeg=0;
    int KPoz=0;
    int KNeg=0;

    for(int i=0;i<12;i++)
    {
        if(Months[i]>0)
        {
            MedPoz+=Months[i];
            KPoz++;
        }
        else
        {
            MedNeg+=Months[i];
            KNeg++;
        }
    }

    ///���������� �����
    float Poz = int((MedPoz/(KPoz*1.0))*100 + 0.5)/100.0;
    float Neg = int((MedNeg/(KNeg*1.0))*100 + 0.5)/100.0;



    cout<<endl<<endl;
    if(KPoz!=0) cout<<"������� ������������� ����������� � ����: +"<<Poz<<endl;
    else cout<<"������������� ���������� � ���� ���� �� ����"<<endl;
    if(KNeg!=0)cout<<"������� ������������� ������������ � ����: "<<Neg<<endl;
    else cout<<"������������� ���������� � ���� ���� �� ����"<<endl;
}
