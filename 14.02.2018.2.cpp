//???? ?????????? ???? ????? ? ?????????? ??????? ?????????. ?????????? ?????????? ????? ????.

#include <iostream>

using namespace std;

main()
{
    setlocale(LC_ALL,"Rus");

    cout<<"??????? ?????????? ?????? ?????: ";
    int x,y;
    cin>>x;
    cout<<"??????? ?????????? ?????? ?????: ";
    cin>>y;

    if (y>x) {cout<<"?????????? ????? ????????????: "<<y-x;}
    else {cout<<"?????????? ????? ????????????: "<<x-y;}
}
