//???????? ?????????, ??????? ? ?????????????????? ????? ????? ??????? ?? ?????
//??????????? ????????????? ????? ? ???????????? ????????????? ????? ?????. ????????? ???????? ?? ???? ????? ?????,
//?????????? ????????? ????? ??????????, ?????????????????? ????? ????????????? ?????? ???? (???? ? ??????? ????????? ?????,
//?? ?????? ? ??????????????????).?????????? ????? ?? ????????? 1000. ????????? ????? ?? ?????? ?? ????????? 30000.

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    setlocale (LC_ALL,"Russian");
    int x=1,S=0,v,x1=INT_MAX;//int_max, ????? ????? ????? ??????????? ?????
    cout<<"???????? ?????? ???????."<<endl;
    cout<<"1 - while"<<endl;
    cout<<"2 - do..while"<<endl;
    cout<<"3 - for"<<endl;
    cout<<"?? ?????????: ";
    cin>>v;//???? ???????? ???????

    cout<<"???????, ????? ?????????? ???? ?????? ???????? 0"<<endl;

    switch (v)
    {
    case 1:
    {
        while (x!=0)
        {
            cout<<"??????? ?????:";
            cin>>x;
            if(x<x1 and x>0 and abs(x)<=30000) (x1=x);//???????????? ?????? ???????????? ?????
            if (x<=-1 and abs(x)<=30000) S++;//??????? ????????????? ?????
            if (S==1000) (x=0);
        }
        cout<<"?????????? ????????????? ?????, ????????? ????: "<<S<<endl;
        cout<<"??????????? ????????????? ????? ????????? ????: "<<x1<<endl;
        break;
    }

    case 2:
    {
        do
        {
            cout<<"??????? ?????: ";
            cin>>x;
            if (x<x1 and x>0 and abs(x)<=30000) (x1=x); //???????????? ?????? ???????????? ?????
            if (x<=-1 and abs(x)<=30000) S++;//??????? ????????????? ?????
            if (S==1000) (x=0);//???? ????? ??????? ????? 1000 ????, ???? ??????????
        }
        while (x!=0);
        cout<<"?????????? ????????????? ?????, ????????? ????: "<<S<<endl;
        cout<<"??????????? ????????????? ????? ????????? ????: "<<x1<<endl;
        break;
    }

    case 3:
    {
        for (;x!=0; )
        {
            cout<<"??????? ?????: ";
            cin>>x;
                if (x<x1 and x>0) (x1=x);//???????????? ?????? ???????????? ?????
                if (x<=-1 and abs(x)<=30000) S++;//??????? ????????????? ?????
                if (S==1000) (x=0);  //???? ????? ??????? ????? 1000 ????, ???? ??????????
            }
            cout<<"?????????? ????????????? ?????, ????????? ????: "<<S<<endl;
            cout<<"??????????? ????????????? ????? ????????? ????: "<<x1<<endl;
            break;
        }


    default:
        cout<<"??????!";



}
}
