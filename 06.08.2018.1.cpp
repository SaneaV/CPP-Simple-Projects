//???? ??? ????? ?????. ??????? ?? ????? ??, ??????? ?????? ????? N<>0.
//???? ????? ????? ???, ?? ??????? ????????? ?????? ?? ?????? N?.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"rus");

    cout<<"??????? ?????? ?????: ";
    int A,B,C;
    cin>>A;
    cout<<"??????? ?????? ?????: ";
    cin>>B;
    cout<<"??????? ?????? ?????: ";
    cin>>C;

    cout<<endl<<endl<<"??????? ?????, ?? ??????? ????? ????????????? ???????: ";
    int N;
    cin>>N;

    cout<<endl;

    A%N!=0 and B%N!=0 and C%N!=0? cout<<"????? ?? ?????? "<<N<<endl:cout<<"";

    A%N==0? cout<<"????? "<<A<<" ?????? ????? "<<N<<"."<<endl:cout<<"";
    B%N==0? cout<<"????? "<<B<<" ?????? ????? "<<N<<"."<<endl:cout<<"";
    C%N==0? cout<<"????? "<<C<<" ?????? ????? "<<N<<"."<<endl:cout<<"";

}
